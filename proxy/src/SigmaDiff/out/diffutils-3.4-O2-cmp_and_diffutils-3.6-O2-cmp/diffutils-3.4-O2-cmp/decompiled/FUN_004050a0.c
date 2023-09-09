1: 
2: char * FUN_004050a0(void)
3: 
4: {
5: undefined8 *puVar1;
6: char cVar2;
7: int iVar3;
8: uint uVar4;
9: uint uVar5;
10: char *__s1;
11: size_t sVar6;
12: char *pcVar7;
13: long lVar8;
14: char *__file;
15: FILE *__stream;
16: byte *pbVar9;
17: char *__s2;
18: long lVar10;
19: uint *puVar11;
20: uint *puVar12;
21: size_t __n;
22: long lVar13;
23: size_t sVar14;
24: long in_FS_OFFSET;
25: bool bVar15;
26: long local_c8;
27: uint local_b8 [16];
28: uint local_78 [14];
29: long local_40;
30: 
31: local_40 = *(long *)(in_FS_OFFSET + 0x28);
32: __s1 = nl_langinfo(0xe);
33: __s2 = DAT_0060c460;
34: if (__s1 == (char *)0x0) {
35: __s1 = "";
36: }
37: if (DAT_0060c460 != (char *)0x0) goto LAB_0040510a;
38: pcVar7 = getenv("CHARSETALIASDIR");
39: if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
40: lVar8 = 0x29;
41: sVar14 = 0x2a;
42: pcVar7 = "/home/ericlee/projects/input3/binaries/lib";
43: LAB_0040519c:
44: sVar6 = sVar14 + 0xe;
45: __n = sVar14;
46: if (pcVar7[lVar8] == '/') goto LAB_004051ef;
47: __n = sVar14 + 1;
48: __file = (char *)malloc(sVar14 + 0xf);
49: if (__file != (char *)0x0) {
50: memcpy(__file,pcVar7,sVar14);
51: __file[sVar14] = '/';
52: goto LAB_00405211;
53: }
54: }
55: else {
56: sVar14 = strlen(pcVar7);
57: if (sVar14 != 0) {
58: lVar8 = sVar14 - 1;
59: goto LAB_0040519c;
60: }
61: sVar6 = 0xe;
62: __n = sVar14;
63: LAB_004051ef:
64: __file = (char *)malloc(sVar6);
65: if (__file != (char *)0x0) {
66: memcpy(__file,pcVar7,__n);
67: LAB_00405211:
68: puVar1 = (undefined8 *)(__file + __n);
69: *puVar1 = 0x2e74657372616863;
70: *(undefined4 *)(puVar1 + 1) = 0x61696c61;
71: *(undefined2 *)((long)puVar1 + 0xc) = 0x73;
72: iVar3 = open(__file,0x20000);
73: if (-1 < iVar3) {
74: __stream = fdopen(iVar3,"r");
75: if (__stream != (FILE *)0x0) {
76: local_c8 = 0;
77: LAB_00405270:
78: pbVar9 = (byte *)__stream->_IO_read_ptr;
79: if (__stream->_IO_read_end <= pbVar9) goto LAB_004053cc;
80: do {
81: __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
82: uVar5 = (uint)*pbVar9;
83: pcVar7 = __s2;
84: while( true ) {
85: __s2 = pcVar7;
86: if ((uVar5 - 9 < 2) || (uVar5 == 0x20)) goto LAB_00405270;
87: if (uVar5 == 0x23) goto LAB_00405415;
88: ungetc(uVar5,__stream);
89: iVar3 = fscanf(__stream,"%50s %50s",local_b8);
90: if (iVar3 < 2) goto LAB_004053df;
91: puVar12 = local_b8;
92: do {
93: puVar11 = puVar12;
94: uVar4 = *puVar11 + 0xfefefeff & ~*puVar11;
95: uVar5 = uVar4 & 0x80808080;
96: puVar12 = puVar11 + 1;
97: } while (uVar5 == 0);
98: bVar15 = (uVar4 & 0x8080) == 0;
99: if (bVar15) {
100: uVar5 = uVar5 >> 0x10;
101: }
102: if (bVar15) {
103: puVar12 = (uint *)((long)puVar11 + 6);
104: }
105: lVar8 = (long)puVar12 +
106: ((-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5)) - (long)local_b8);
107: puVar12 = local_78;
108: do {
109: puVar11 = puVar12;
110: uVar4 = *puVar11 + 0xfefefeff & ~*puVar11;
111: uVar5 = uVar4 & 0x80808080;
112: puVar12 = puVar11 + 1;
113: } while (uVar5 == 0);
114: bVar15 = (uVar4 & 0x8080) == 0;
115: if (bVar15) {
116: uVar5 = uVar5 >> 0x10;
117: }
118: if (bVar15) {
119: puVar12 = (uint *)((long)puVar11 + 6);
120: }
121: lVar13 = (long)puVar12 +
122: ((-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5)) - (long)local_78);
123: lVar10 = lVar8 + lVar13;
124: if (local_c8 == 0) {
125: __s2 = (char *)malloc(lVar10 + 3);
126: }
127: else {
128: lVar10 = lVar10 + local_c8;
129: __s2 = (char *)realloc(pcVar7,lVar10 + 3);
130: }
131: local_c8 = lVar10 + 2;
132: if (__s2 == (char *)0x0) {
133: __s2 = "";
134: free(pcVar7);
135: fclose(__stream);
136: goto LAB_004053f5;
137: }
138: memcpy(__s2 + (-2 - lVar8) + (local_c8 - lVar13),local_b8,lVar8 + 1);
139: memcpy(__s2 + (local_c8 - lVar13) + -1,local_78,lVar13 + 1);
140: pbVar9 = (byte *)__stream->_IO_read_ptr;
141: if (pbVar9 < __stream->_IO_read_end) break;
142: LAB_004053cc:
143: uVar5 = __uflow((_IO_FILE *)__stream);
144: pcVar7 = __s2;
145: if (uVar5 == 0xffffffff) goto LAB_004053df;
146: }
147: } while( true );
148: }
149: close(iVar3);
150: }
151: goto LAB_0040544e;
152: }
153: }
154: __s2 = "";
155: DAT_0060c460 = __s2;
156: LAB_0040510a:
157: do {
158: cVar2 = *__s2;
159: if (cVar2 == '\0') {
160: LAB_0040513c:
161: if (*__s1 == '\0') {
162: __s1 = "ASCII";
163: }
164: if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
165: /* WARNING: Subroutine does not return */
166: __stack_chk_fail();
167: }
168: return __s1;
169: }
170: iVar3 = strcmp(__s1,__s2);
171: if ((iVar3 == 0) || ((cVar2 == '*' && (__s2[1] == '\0')))) {
172: sVar14 = strlen(__s2);
173: __s1 = __s2 + sVar14 + 1;
174: goto LAB_0040513c;
175: }
176: sVar14 = strlen(__s2);
177: sVar6 = strlen(__s2 + sVar14 + 1);
178: __s2 = __s2 + sVar14 + 1 + sVar6 + 1;
179: } while( true );
180: LAB_00405415:
181: do {
182: pbVar9 = (byte *)__stream->_IO_read_ptr;
183: if (pbVar9 < __stream->_IO_read_end) {
184: __stream->_IO_read_ptr = (char *)(pbVar9 + 1);
185: uVar5 = (uint)*pbVar9;
186: }
187: else {
188: uVar5 = __uflow((_IO_FILE *)__stream);
189: }
190: } while ((uVar5 != 0xffffffff) && (uVar5 != 10));
191: if (uVar5 == 0xffffffff) goto LAB_004053df;
192: goto LAB_00405270;
193: LAB_004053df:
194: fclose(__stream);
195: if (local_c8 == 0) {
196: LAB_0040544e:
197: __s2 = "";
198: }
199: else {
200: __s2[local_c8] = '\0';
201: }
202: LAB_004053f5:
203: free(__file);
204: DAT_0060c460 = __s2;
205: goto LAB_0040510a;
206: }
207: 
