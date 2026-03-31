# DeepDiWeb

DeepDiWeb is a web-based reverse-engineering workspace that combines:

- an interactive **binary disassembler UI** (Vue 2), and
- a **Node/Express backend** that handles file upload, project state, sample disassembly data serving, and code-diff orchestration.

The project also integrates a **SigmaDiff-based binary diff pipeline** (Python + Ghidra) for cross-binary function matching and diff visualization.

Production demo: https://deepdi.deepbits.com

---

## What this project does

At a high level, DeepDiWeb lets users:

1. Upload binaries (or load examples),
2. Browse disassembly-oriented views (listing / graph / hex / sections / file info / call graph),
3. Run and inspect code-diff workflows between two binaries,
4. Track previous diff runs via history.

The frontend route is centered around ` /odaweb/:shortName `, where `shortName` identifies a temporary project snapshot managed by the backend.

---

## Architecture overview

### 1) Frontend (`web/`)

- Stack: Vue 2 + Vue Router + Vuex + BootstrapVue.
- Entry: `web/src/main.js` mounts `App` and router/store.
- Main page: `web/src/components/Disassembler.vue` renders the workspace and tabs.
- API client: `web/src/api/oda.js` calls backend endpoints under `/odaweb/api/*`.

Key UI areas include:

- **Listing / Graph / Hex / Sections / File Info / Call Graph** tabs,
- **Code Diff** tab for per-function comparison,
- **Diff History** tab to revisit previous diff tasks,
- Upload/configuration modals and navigation components.

### 2) Backend proxy (`proxy/`)

- Stack: TypeScript + Express.
- Entry: `proxy/src/index.ts`.
- Router hub: `proxy/src/routes.ts`.

Responsibilities:

- Serve frontend static files,
- Accept uploads (`/api/_upload` and `/api/codeDiffUpload`),
- Manage in-memory project/function maps (`proxy/src/database.ts`),
- Load/disassemble project data (`/api/load`, `/api/:short_name/disassemble`, `/api/disassemble_bytes`),
- Trigger/read SigmaDiff outputs (`/api/runSigmaDiff`, `/api/getFunctionList`, `/api/getCodeDiffResult`, `/api/getScript`, `/api/getJsonContent`).

### 3) SigmaDiff integration (`proxy/src/SigmaDiff/`)

- Stores uploaded binaries for diff input,
- Executes `sigmadiff.py` via backend route,
- Writes outputs (matched functions, reports, decompiled artifacts, etc.) under `proxy/src/SigmaDiff/out/`.

---

## Core modules

- `web/`: User interface and interaction logic.
- `proxy/`: API layer + lightweight project state + orchestration.
- `proxy/src/routes/upload.ts`: Generic binary upload flow.
- `proxy/src/routes/load.ts`: Project metadata/loading logic for UI initialization.
- `proxy/src/routes/disassemble.ts`: Disassembly data endpoints (currently sample-backed).
- `proxy/src/routes/codediff.ts`: Code-diff upload, SigmaDiff execution, function list/result retrieval, history JSON management.
- `proxy/src/database.ts`: In-memory `Projects` / `FunctionList` maps.
- `proxy/src/config.ts`: Runtime config such as upload cache directory and cache limits.
- `Dockerfile`: Builds frontend, backend, and runtime image.

---

## High-level runtime flow

### A. Disassembly workspace flow

1. User opens `/odaweb/:shortName`.
2. Frontend checks editability (`/api/masters/:short_name/can_edit`).
3. If it is an example project, backend clones it and returns a new short name.
4. Frontend loads project data via `/api/load`.
5. Frontend renders listing/graph/hex/sections and related tabs.

### B. Upload + disassemble flow

1. User uploads a binary from UI.
2. Backend stores file in `UPLOAD_DIR` (default temp cache).
3. Backend creates a short name and records project metadata in memory.
4. Frontend requests disassembly endpoint using that short name.
5. Returned JSON feeds the disassembly UI views.

### C. Code-diff (SigmaDiff) flow

1. User uploads two binaries for code diff (`/api/codeDiffUpload`).
2. Backend places them in SigmaDiff input directories and records upload history.
3. Frontend triggers `/api/runSigmaDiff`.
4. Backend executes Python SigmaDiff command (with Ghidra path).
5. Frontend fetches matched function list (`/api/getFunctionList`).
6. User selects function(s), frontend requests detailed diff (`/api/getCodeDiffResult`).
7. UI renders comparison and script/history data (`/api/getScript`, `/api/getJsonContent`).

---

## Quick workflow

If you only want the shortest path from upload to diff result, follow this minimal workflow:

1. Upload binary **A** and binary **B** in the **Code Diff** tab.
2. Click **Run SigmaDiff** and wait for backend task completion.
3. Open **Function List** and choose one matched function pair.
4. View **Code Diff Result** to inspect line-level/token-level differences.
5. Save or revisit this run in **Diff History**.

### Diff effect preview (token highlight)

You can place the preview right before or inside the **Code-diff (SigmaDiff) flow** section so readers see the visual expectation before API details.

```diff
- if (score > 0x40) { grant_access(user); }
+ if (score >= 0x40) { grant_access(admin_user); }
```

The `>` → `>=` and `user` → `admin_user` parts represent the kind of token-level highlights users can quickly spot in the diff view.

---

## Local development

### Prerequisites

- Node.js 16+ (project Dockerfile uses Node 16.13.0)
- npm or yarn
- Python 3 (for SigmaDiff path)
- (Optional for full diff pipeline) Ghidra installed in expected backend path

### Install dependencies

```bash
# frontend
cd web
npm install --legacy-peer-deps

# backend
cd ../proxy
npm install
```

### Run locally (two terminals)

```bash
# terminal 1
cd web
npm run dev
```

```bash
# terminal 2
cd proxy
npm run dev
```

- Frontend dev server serves UI.
- Backend listens on port `8001`.

---


## Troubleshooting dependency installs

In most cases, you **do not need** to remove lock files or `node_modules` first. Start with a normal install:

```bash
# web
cd web
npm install --legacy-peer-deps

# proxy
cd ../proxy
npm install
```

Use a clean reinstall only when you see persistent dependency-resolution issues, such as:

- lockfile conflicts after switching branches,
- repeated `ERESOLVE` / peer-dependency mismatch errors,
- corrupted or partially-installed modules.

Then run (inside the relevant package directory, e.g. `web/` or `proxy/`):

```bash
rm -rf node_modules
rm -f package-lock.json yarn.lock
npm install --legacy-peer-deps
```

> Note: avoid deleting lockfiles routinely in team workflows, because lockfiles are important for reproducible installs.

---

## Build and containerization

The provided `Dockerfile`:

1. Copies `web/` and `proxy/`,
2. Builds frontend assets,
3. Builds backend TypeScript,
4. Starts backend with `node /proxy/dist/index.js`.

`buildspec.yml` includes AWS ECR build/push steps for CI/CD.

---

## Notes and current implementation traits

- Project metadata is kept **in memory** (`Map`) and trimmed by cache limit.
- Uploaded files are stored in temp/cache directory (`UPLOAD_DIR`).
- Some disassembly endpoints currently return sample JSON fixtures from `proxy/src/sample_output/`.
- Session secret in backend source is placeholder/demo-level and should be hardened for production.

---

## Repository structure (simplified)

```text
.
├─ web/                      # Vue frontend
│  └─ src/
│     ├─ api/                # API client layer
│     ├─ components/         # Disassembler UI, tabs, modals, sidebars
│     ├─ router/
│     └─ store/
├─ proxy/                    # Express TypeScript backend
│  └─ src/
│     ├─ routes/             # Upload/load/disassemble/codediff APIs
│     ├─ SigmaDiff/          # Diff pipeline inputs/outputs/scripts
│     ├─ sample_output/      # Sample disassembly JSON responses
│     ├─ database.ts
│     └─ index.ts
├─ Dockerfile
└─ README.md
```

