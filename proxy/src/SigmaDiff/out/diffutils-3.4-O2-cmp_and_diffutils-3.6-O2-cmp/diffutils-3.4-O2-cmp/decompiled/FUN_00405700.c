1: 
2: undefined8 FUN_00405700(mbstate_t *param_1,mbstate_t param_2,mbstate_t **param_3)
3: 
4: {
5: mbstate_t mVar1;
6: mbstate_t mVar2;
7: mbstate_t __s2;
8: char cVar3;
9: undefined *puVar4;
10: int iVar5;
11: mbstate_t *pmVar6;
12: mbstate_t *pmVar7;
13: mbstate_t *pmVar8;
14: size_t sVar9;
15: undefined8 uVar10;
16: undefined *puVar11;
17: mbstate_t mVar12;
18: char cVar13;
19: long lVar14;
20: long in_FS_OFFSET;
21: undefined auStack312 [8];
22: mbstate_t **local_130;
23: mbstate_t *local_128;
24: mbstate_t local_120;
25: mbstate_t *local_118;
26: long local_110;
27: char local_108;
28: mbstate_t local_104;
29: undefined local_fc;
30: mbstate_t local_f8;
31: mbstate_t local_f0;
32: char local_e8;
33: int local_e4;
34: undefined local_e0 [24];
35: char local_c8;
36: mbstate_t local_c4;
37: char local_bc;
38: mbstate_t *local_b8;
39: size_t local_b0;
40: char local_a8;
41: int local_a4 [7];
42: char local_88;
43: mbstate_t local_84;
44: char local_7c;
45: mbstate_t *local_78;
46: mbstate_t local_70;
47: char local_68;
48: int local_64 [9];
49: long local_40;
50: 
51: puVar11 = auStack312;
52: local_40 = *(long *)(in_FS_OFFSET + 0x28);
53: local_130 = param_3;
54: local_128 = param_1;
55: local_120 = (mbstate_t)FUN_004077d0(param_2);
56: puVar4 = auStack312;
57: if ((ulong)local_120 < 0x492492492492493) {
58: if ((ulong)((long)local_120 * 0x38) < 0xfb0) {
59: lVar14 = -((long)local_120 * 0x38 + 0x2eU & 0xfffffffffffffff0);
60: puVar11 = auStack312 + lVar14;
61: pmVar6 = (mbstate_t *)((long)&local_120 + lVar14);
62: }
63: else {
64: pmVar6 = (mbstate_t *)FUN_004076c0();
65: }
66: puVar4 = puVar11;
67: if (pmVar6 != (mbstate_t *)0x0) {
68: local_f8 = param_2;
69: mVar12 = (mbstate_t)(pmVar6 + 3);
70: local_108 = '\0';
71: local_104 = (mbstate_t)0x0;
72: local_fc = 0;
73: local_110 = (long)local_120 * 0x30;
74: local_118 = pmVar6 + (long)local_120 * 6;
75: do {
76: local_fc = 0;
77: if (local_108 == '\0') {
78: if ((*(uint *)(&DAT_00408cc0 + (ulong)(*(byte *)local_f8 >> 5) * 4) >>
79: (*(byte *)local_f8 & 0x1f) & 1) == 0) {
80: *(undefined8 *)(puVar11 + -8) = 0x405bb8;
81: iVar5 = mbsinit(&local_104,puVar11[-8]);
82: if (iVar5 == 0) {
83: LAB_004060ca:
84: /* WARNING: Subroutine does not return */
85: *(undefined8 *)(puVar11 + -8) = 0x4060e3;
86: __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next",
87: puVar11[-8]);
88: }
89: local_108 = '\x01';
90: goto LAB_00405bc7;
91: }
92: local_f0 = (mbstate_t)0x1;
93: local_e8 = '\x01';
94: local_e4 = (int)(char)*(byte *)local_f8;
95: LAB_0040584d:
96: local_fc = 1;
97: if (local_e4 == 0) goto code_r0x00405862;
98: cVar13 = '\x01';
99: }
100: else {
101: LAB_00405bc7:
102: *(undefined8 *)(puVar11 + -8) = 0x405bcc;
103: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
104: mVar1 = local_f8;
105: *(undefined8 *)(puVar11 + -8) = 0x405bde;
106: uVar10 = FUN_00403aa0(mVar1,sVar9);
107: *(undefined8 *)(puVar11 + -8) = 0x405bff;
108: local_f0 = (mbstate_t)FUN_00404fc0(&local_e4,mVar1,uVar10);
109: mVar1 = local_f8;
110: if (local_f0 == (mbstate_t)0xffffffffffffffff) {
111: local_f0 = (mbstate_t)0x1;
112: local_e8 = 0;
113: }
114: else {
115: if (local_f0 != (mbstate_t)0xfffffffffffffffe) {
116: if (local_f0 == (mbstate_t)0x0) {
117: local_f0 = (mbstate_t)0x1;
118: if (*(byte *)local_f8 != 0) {
119: LAB_00406101:
120: /* WARNING: Subroutine does not return */
121: *(undefined8 *)(puVar11 + -8) = 0x40611a;
122: __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next",
123: puVar11[-8]);
124: }
125: if (local_e4 != 0) {
126: LAB_004060e3:
127: /* WARNING: Subroutine does not return */
128: *(undefined8 *)(puVar11 + -8) = 0x4060fc;
129: __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next",
130: puVar11[-8]);
131: }
132: }
133: local_e8 = '\x01';
134: *(undefined8 *)(puVar11 + -8) = 0x405c61;
135: iVar5 = mbsinit(&local_104,puVar11[-8]);
136: if (iVar5 != 0) {
137: local_108 = '\0';
138: }
139: goto LAB_0040584d;
140: }
141: *(undefined8 *)(puVar11 + -8) = 0x405f91;
142: local_f0 = (mbstate_t)strlen((char *)mVar1,puVar11[-8]);
143: local_e8 = 0;
144: }
145: local_e8 = '\0';
146: local_fc = 1;
147: cVar13 = '\0';
148: }
149: mVar2 = local_f0;
150: mVar1 = local_f8;
151: local_fc = 1;
152: if (local_f8 == (mbstate_t)local_e0) {
153: *(undefined8 *)(puVar11 + -8) = 0x405f75;
154: memcpy((void *)mVar12,(void *)mVar1,(size_t)mVar2,puVar11[-8]);
155: *(mbstate_t *)((long)mVar12 + -0x18) = mVar12;
156: cVar13 = local_e8;
157: }
158: else {
159: *(mbstate_t *)((long)mVar12 + -0x18) = local_f8;
160: }
161: *(char *)&((mbstate_t *)((long)mVar12 + -8))->__count = cVar13;
162: *(mbstate_t *)((long)mVar12 + -0x10) = local_f0;
163: if (cVar13 != '\0') {
164: *(int *)((long)mVar12 + -4) = local_e4;
165: }
166: local_fc = 0;
167: mVar12 = (mbstate_t)((long)mVar12 + 0x30);
168: local_f8 = (mbstate_t)((long)local_f8 + (long)local_f0);
169: } while( true );
170: }
171: }
172: puVar11 = puVar4;
173: uVar10 = 0;
174: LAB_00405757:
175: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
176: return uVar10;
177: }
178: /* WARNING: Subroutine does not return */
179: *(undefined8 *)(puVar11 + -8) = 0x406101;
180: __stack_chk_fail();
181: code_r0x00405862:
182: lVar14 = 0;
183: pmVar8 = pmVar6 + 8;
184: mVar12 = (mbstate_t)0x2;
185: local_118[1] = (mbstate_t)0x1;
186: if ((ulong)local_120 < 3) {
187: LAB_0040591b:
188: local_c8 = '\0';
189: local_c4 = (mbstate_t)0x0;
190: local_bc = '\0';
191: mVar12 = (mbstate_t)0x0;
192: local_88 = '\0';
193: local_84 = (mbstate_t)0x0;
194: *local_130 = (mbstate_t *)0x0;
195: local_7c = '\0';
196: local_b8 = local_128;
197: local_78 = local_128;
198: local_128 = &local_84;
199: local_118 = &local_c4;
200: LAB_00405990:
201: do {
202: if (local_7c == '\0') goto LAB_00405cbe;
203: if (local_68 != '\0') goto LAB_00405d0b;
204: LAB_004059a7:
205: pmVar8 = pmVar6 + (long)mVar12 * 6;
206: LAB_004059b2:
207: pmVar7 = local_78;
208: mVar1 = pmVar8[1];
209: if (mVar1 == local_70) {
210: mVar2 = *pmVar8;
211: *(undefined8 *)(puVar11 + -8) = 0x405e6c;
212: iVar5 = memcmp((void *)mVar2,pmVar7,(size_t)mVar1,puVar11[-8]);
213: if (iVar5 == 0) goto LAB_00405e74;
214: }
215: LAB_004059c0:
216: cVar13 = local_bc;
217: pmVar8 = local_118;
218: if (mVar12 == (mbstate_t)0x0) {
219: cVar3 = local_a8;
220: if (local_bc == '\0') {
221: if (local_c8 == '\0') {
222: if ((*(uint *)(&DAT_00408cc0 + (ulong)(*(byte *)&local_b8->__count >> 5) * 4) >>
223: (*(byte *)&local_b8->__count & 0x1f) & 1) == 0) {
224: *(undefined8 *)(puVar11 + -8) = 0x405fc1;
225: iVar5 = mbsinit(pmVar8,puVar11[-8]);
226: if (iVar5 != 0) {
227: local_c8 = '\x01';
228: goto LAB_00405fd0;
229: }
230: goto LAB_004060ca;
231: }
232: local_b0 = 1;
233: cVar13 = '\x01';
234: local_a8 = '\x01';
235: local_a4[0] = (int)*(char *)&local_b8->__count;
236: }
237: else {
238: LAB_00405fd0:
239: *(undefined8 *)(puVar11 + -8) = 0x405fd5;
240: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
241: pmVar8 = local_b8;
242: *(undefined8 *)(puVar11 + -8) = 0x405fe7;
243: uVar10 = FUN_00403aa0(pmVar8,sVar9);
244: *(undefined8 *)(puVar11 + -8) = 0x406008;
245: local_b0 = FUN_00404fc0(local_a4,pmVar8,uVar10);
246: pmVar8 = local_b8;
247: if (local_b0 == 0xffffffffffffffff) {
248: local_b0 = 1;
249: local_a8 = '\0';
250: }
251: else {
252: if (local_b0 == 0xfffffffffffffffe) {
253: *(undefined8 *)(puVar11 + -8) = 0x4060b7;
254: local_b0 = strlen((char *)pmVar8,puVar11[-8]);
255: local_a8 = '\0';
256: }
257: else {
258: if (local_b0 == 0) {
259: local_b0 = 1;
260: if (*(char *)&local_b8->__count != '\0') goto LAB_00406101;
261: if (local_a4[0] != 0) goto LAB_004060e3;
262: }
263: local_a8 = '\x01';
264: cVar13 = '\x01';
265: *(undefined8 *)(puVar11 + -8) = 0x40606a;
266: iVar5 = mbsinit(&local_c4,puVar11[-8]);
267: if (iVar5 != 0) {
268: local_c8 = '\0';
269: }
270: }
271: }
272: }
273: local_bc = '\x01';
274: cVar3 = cVar13;
275: }
276: if ((cVar3 == '\0') || (local_a4[0] != 0)) {
277: local_b8 = (mbstate_t *)((long)&local_b8->__count + local_b0);
278: local_78 = (mbstate_t *)((long)&local_78->__count + (long)local_70);
279: local_bc = '\0';
280: local_7c = 0;
281: LAB_00405cbb:
282: local_7c = '\0';
283: LAB_00405cbe:
284: cVar13 = local_7c;
285: pmVar8 = local_128;
286: if (local_88 == '\0') {
287: if ((*(uint *)(&DAT_00408cc0 + (ulong)(*(byte *)&local_78->__count >> 5) * 4) >>
288: (*(byte *)&local_78->__count & 0x1f) & 1) == 0) {
289: *(undefined8 *)(puVar11 + -8) = 0x405d4c;
290: iVar5 = mbsinit(pmVar8,puVar11[-8]);
291: if (iVar5 != 0) {
292: local_88 = '\x01';
293: goto LAB_00405d58;
294: }
295: goto LAB_004060ca;
296: }
297: local_70 = (mbstate_t)0x1;
298: cVar13 = '\x01';
299: local_68 = '\x01';
300: local_64[0] = (int)*(char *)&local_78->__count;
301: }
302: else {
303: LAB_00405d58:
304: *(undefined8 *)(puVar11 + -8) = 0x405d5d;
305: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
306: pmVar8 = local_78;
307: *(undefined8 *)(puVar11 + -8) = 0x405d6c;
308: uVar10 = FUN_00403aa0(pmVar8,sVar9);
309: *(undefined8 *)(puVar11 + -8) = 0x405d87;
310: local_70 = (mbstate_t)FUN_00404fc0(local_64,pmVar8,uVar10);
311: pmVar8 = local_78;
312: if (local_70 == (mbstate_t)0xffffffffffffffff) {
313: local_70 = (mbstate_t)0x1;
314: local_68 = '\0';
315: }
316: else {
317: if (local_70 == (mbstate_t)0xfffffffffffffffe) {
318: *(undefined8 *)(puVar11 + -8) = 0x406087;
319: local_70 = (mbstate_t)strlen((char *)pmVar8,puVar11[-8]);
320: local_68 = '\0';
321: }
322: else {
323: if (local_70 == (mbstate_t)0x0) {
324: local_70 = (mbstate_t)0x1;
325: if (*(char *)&local_78->__count != '\0') goto LAB_00406101;
326: if (local_64[0] != 0) goto LAB_004060e3;
327: }
328: local_68 = '\x01';
329: cVar13 = '\x01';
330: *(undefined8 *)(puVar11 + -8) = 0x405ddb;
331: iVar5 = mbsinit(&local_84,puVar11[-8]);
332: if (iVar5 != 0) {
333: local_88 = '\0';
334: }
335: }
336: }
337: }
338: local_7c = '\x01';
339: if (cVar13 == '\0') goto LAB_004059a7;
340: LAB_00405d0b:
341: if (local_64[0] == 0) goto LAB_00405ea2;
342: pmVar8 = pmVar6 + (long)mVar12 * 6;
343: if (*(char *)&pmVar8[2].__count == '\0') goto LAB_004059b2;
344: if (local_64[0] == pmVar8[2].__value) goto LAB_00405e74;
345: goto LAB_004059c0;
346: }
347: goto LAB_00405a89;
348: }
349: lVar14 = *(long *)((long)&pmVar6[(long)mVar12].__count + local_110);
350: mVar12 = (mbstate_t)((long)mVar12 - lVar14);
351: } while (lVar14 == 0);
352: cVar13 = local_a8;
353: if (local_bc == '\0') goto LAB_00405a20;
354: do {
355: if ((cVar13 != '\0') && (local_a4[0] == 0)) {
356: LAB_00405a89:
357: /* WARNING: Subroutine does not return */
358: *(undefined8 *)(puVar11 + -8) = 0x405a8e;
359: abort(puVar11[-8]);
360: }
361: local_b8 = (mbstate_t *)((long)&local_b8->__count + local_b0);
362: lVar14 = lVar14 + -1;
363: local_bc = '\0';
364: if (lVar14 == 0) goto LAB_00405990;
365: LAB_00405a20:
366: cVar13 = local_bc;
367: pmVar8 = local_118;
368: if (local_c8 == '\0') {
369: if ((*(uint *)(&DAT_00408cc0 + (ulong)(*(byte *)&local_b8->__count >> 5) * 4) >>
370: (*(byte *)&local_b8->__count & 0x1f) & 1) == 0) {
371: *(undefined8 *)(puVar11 + -8) = 0x405abc;
372: iVar5 = mbsinit(pmVar8,puVar11[-8]);
373: if (iVar5 != 0) {
374: local_c8 = '\x01';
375: goto LAB_00405acb;
376: }
377: goto LAB_004060ca;
378: }
379: local_b0 = 1;
380: cVar13 = '\x01';
381: local_a8 = '\x01';
382: local_a4[0] = (int)*(char *)&local_b8->__count;
383: }
384: else {
385: LAB_00405acb:
386: *(undefined8 *)(puVar11 + -8) = 0x405ad0;
387: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
388: pmVar8 = local_b8;
389: *(undefined8 *)(puVar11 + -8) = 0x405ae2;
390: uVar10 = FUN_00403aa0(pmVar8,sVar9);
391: *(undefined8 *)(puVar11 + -8) = 0x405afc;
392: local_b0 = FUN_00404fc0(local_a4,pmVar8,uVar10);
393: pmVar8 = local_b8;
394: if (local_b0 == 0xffffffffffffffff) {
395: local_b0 = 1;
396: local_a8 = '\0';
397: }
398: else {
399: if (local_b0 == 0xfffffffffffffffe) {
400: *(undefined8 *)(puVar11 + -8) = 0x405b9c;
401: local_b0 = strlen((char *)pmVar8,puVar11[-8]);
402: local_a8 = '\0';
403: }
404: else {
405: if (local_b0 == 0) {
406: local_b0 = 1;
407: if (*(char *)&local_b8->__count != '\0') goto LAB_00406101;
408: if (local_a4[0] != 0) goto LAB_004060e3;
409: }
410: local_a8 = '\x01';
411: cVar13 = '\x01';
412: *(undefined8 *)(puVar11 + -8) = 0x405b60;
413: iVar5 = mbsinit(&local_c4,puVar11[-8]);
414: if (iVar5 != 0) {
415: local_c8 = '\0';
416: }
417: }
418: }
419: }
420: local_bc = '\x01';
421: } while( true );
422: }
423: LAB_00405890:
424: cVar13 = *(char *)&pmVar8->__count;
425: do {
426: pmVar7 = pmVar6 + lVar14 * 6;
427: if ((cVar13 == '\0') || (*(char *)&pmVar7[2].__count == '\0')) {
428: mVar1 = pmVar8[-1];
429: if (mVar1 == pmVar7[1]) {
430: mVar2 = pmVar8[-2];
431: __s2 = *pmVar7;
432: *(undefined8 *)(puVar11 + -8) = 0x4058ed;
433: iVar5 = memcmp((void *)mVar2,(void *)__s2,(size_t)mVar1,puVar11[-8]);
434: if (iVar5 == 0) goto LAB_004058f1;
435: }
436: }
437: else {
438: if (pmVar8->__value == pmVar7[2].__value) {
439: LAB_004058f1:
440: lVar14 = lVar14 + 1;
441: local_118[(long)mVar12] = (mbstate_t)((long)mVar12 - lVar14);
442: goto LAB_00405906;
443: }
444: }
445: if (lVar14 == 0) break;
446: lVar14 = lVar14 - *(long *)((long)&pmVar6[lVar14].__count + local_110);
447: } while( true );
448: local_118[(long)mVar12] = mVar12;
449: LAB_00405906:
450: mVar12 = (mbstate_t)((long)mVar12 + 1);
451: pmVar8 = pmVar8 + 6;
452: if (local_120 == mVar12) goto LAB_0040591b;
453: goto LAB_00405890;
454: LAB_00405e74:
455: mVar12 = (mbstate_t)((long)mVar12 + 1);
456: local_78 = (mbstate_t *)((long)&local_78->__count + (long)local_70);
457: local_7c = '\0';
458: if (local_120 == mVar12) {
459: *local_130 = local_b8;
460: LAB_00405ea2:
461: *(undefined8 *)(puVar11 + -8) = 0x405eaa;
462: FUN_00407740(pmVar6);
463: uVar10 = 1;
464: goto LAB_00405757;
465: }
466: goto LAB_00405cbb;
467: }
468: 
