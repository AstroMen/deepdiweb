1: 
2: undefined8 FUN_00405880(mbstate_t *param_1,mbstate_t param_2,mbstate_t **param_3)
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
55: local_120 = (mbstate_t)FUN_00407970(param_2);
56: puVar4 = auStack312;
57: if ((-1 < SUB168(ZEXT816(0x38) * ZEXT816((ulong)local_120),0)) &&
58: (puVar4 = auStack312, SUB168(ZEXT816(0x38) * ZEXT816((ulong)local_120) >> 0x40,0) == 0)) {
59: if ((ulong)((long)local_120 * 0x38) < 0xfb0) {
60: lVar14 = -((long)local_120 * 0x38 + 0x2eU & 0xfffffffffffffff0);
61: puVar11 = auStack312 + lVar14;
62: pmVar6 = (mbstate_t *)((long)&local_120 + lVar14);
63: }
64: else {
65: pmVar6 = (mbstate_t *)FUN_00407860();
66: }
67: puVar4 = puVar11;
68: if (pmVar6 != (mbstate_t *)0x0) {
69: local_f8 = param_2;
70: mVar12 = (mbstate_t)(pmVar6 + 3);
71: local_108 = '\0';
72: local_104 = (mbstate_t)0x0;
73: local_fc = 0;
74: local_110 = (long)local_120 * 0x30;
75: local_118 = pmVar6 + (long)local_120 * 6;
76: do {
77: local_fc = 0;
78: if (local_108 == '\0') {
79: if ((*(uint *)(&DAT_00408f00 + (ulong)(*(byte *)local_f8 >> 5) * 4) >>
80: (*(byte *)local_f8 & 0x1f) & 1) == 0) {
81: *(undefined8 *)(puVar11 + -8) = 0x405d48;
82: iVar5 = mbsinit(&local_104,puVar11[-8]);
83: if (iVar5 == 0) {
84: LAB_0040625a:
85: /* WARNING: Subroutine does not return */
86: *(undefined8 *)(puVar11 + -8) = 0x406273;
87: __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next",
88: puVar11[-8]);
89: }
90: local_108 = '\x01';
91: goto LAB_00405d57;
92: }
93: local_f0 = (mbstate_t)0x1;
94: local_e8 = '\x01';
95: local_e4 = (int)(char)*(byte *)local_f8;
96: LAB_004059dd:
97: local_fc = 1;
98: if (local_e4 == 0) goto code_r0x004059f2;
99: cVar13 = '\x01';
100: }
101: else {
102: LAB_00405d57:
103: *(undefined8 *)(puVar11 + -8) = 0x405d5c;
104: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
105: mVar1 = local_f8;
106: *(undefined8 *)(puVar11 + -8) = 0x405d6e;
107: uVar10 = FUN_00403bc0(mVar1,sVar9);
108: *(undefined8 *)(puVar11 + -8) = 0x405d8f;
109: local_f0 = (mbstate_t)FUN_00405130(&local_e4,mVar1,uVar10);
110: mVar1 = local_f8;
111: if (local_f0 == (mbstate_t)0xffffffffffffffff) {
112: local_f0 = (mbstate_t)0x1;
113: local_e8 = 0;
114: }
115: else {
116: if (local_f0 != (mbstate_t)0xfffffffffffffffe) {
117: if (local_f0 == (mbstate_t)0x0) {
118: local_f0 = (mbstate_t)0x1;
119: if (*(byte *)local_f8 != 0) {
120: LAB_0040629b:
121: /* WARNING: Subroutine does not return */
122: *(undefined8 *)(puVar11 + -8) = 0x4062b4;
123: __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next",
124: puVar11[-8]);
125: }
126: if (local_e4 != 0) {
127: LAB_00406273:
128: /* WARNING: Subroutine does not return */
129: *(undefined8 *)(puVar11 + -8) = 0x40628c;
130: __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next",
131: puVar11[-8]);
132: }
133: }
134: local_e8 = '\x01';
135: *(undefined8 *)(puVar11 + -8) = 0x405df1;
136: iVar5 = mbsinit(&local_104,puVar11[-8]);
137: if (iVar5 != 0) {
138: local_108 = '\0';
139: }
140: goto LAB_004059dd;
141: }
142: *(undefined8 *)(puVar11 + -8) = 0x406121;
143: local_f0 = (mbstate_t)strlen((char *)mVar1,puVar11[-8]);
144: local_e8 = 0;
145: }
146: local_e8 = '\0';
147: local_fc = 1;
148: cVar13 = '\0';
149: }
150: mVar2 = local_f0;
151: mVar1 = local_f8;
152: local_fc = 1;
153: if (local_f8 == (mbstate_t)local_e0) {
154: *(undefined8 *)(puVar11 + -8) = 0x406105;
155: memcpy((void *)mVar12,(void *)mVar1,(size_t)mVar2,puVar11[-8]);
156: *(mbstate_t *)((long)mVar12 + -0x18) = mVar12;
157: cVar13 = local_e8;
158: }
159: else {
160: *(mbstate_t *)((long)mVar12 + -0x18) = local_f8;
161: }
162: *(char *)&((mbstate_t *)((long)mVar12 + -8))->__count = cVar13;
163: *(mbstate_t *)((long)mVar12 + -0x10) = local_f0;
164: if (cVar13 != '\0') {
165: *(int *)((long)mVar12 + -4) = local_e4;
166: }
167: local_fc = 0;
168: mVar12 = (mbstate_t)((long)mVar12 + 0x30);
169: local_f8 = (mbstate_t)((long)local_f8 + (long)local_f0);
170: } while( true );
171: }
172: }
173: puVar11 = puVar4;
174: uVar10 = 0;
175: LAB_004058e5:
176: if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
177: /* WARNING: Subroutine does not return */
178: *(undefined8 *)(puVar11 + -8) = 0x40629b;
179: __stack_chk_fail();
180: }
181: return uVar10;
182: code_r0x004059f2:
183: lVar14 = 0;
184: pmVar8 = pmVar6 + 8;
185: mVar12 = (mbstate_t)0x2;
186: local_118[1] = (mbstate_t)0x1;
187: if ((ulong)local_120 < 3) {
188: LAB_00405aab:
189: local_c8 = '\0';
190: local_c4 = (mbstate_t)0x0;
191: local_bc = '\0';
192: mVar12 = (mbstate_t)0x0;
193: local_88 = '\0';
194: local_84 = (mbstate_t)0x0;
195: *local_130 = (mbstate_t *)0x0;
196: local_7c = '\0';
197: local_b8 = local_128;
198: local_78 = local_128;
199: local_128 = &local_84;
200: local_118 = &local_c4;
201: LAB_00405b20:
202: do {
203: if (local_7c == '\0') goto LAB_00405e4e;
204: if (local_68 != '\0') goto LAB_00405e9b;
205: LAB_00405b37:
206: pmVar8 = pmVar6 + (long)mVar12 * 6;
207: LAB_00405b42:
208: pmVar7 = local_78;
209: mVar1 = pmVar8[1];
210: if (mVar1 == local_70) {
211: mVar2 = *pmVar8;
212: *(undefined8 *)(puVar11 + -8) = 0x405ffc;
213: iVar5 = memcmp((void *)mVar2,pmVar7,(size_t)mVar1,puVar11[-8]);
214: if (iVar5 == 0) goto LAB_00406004;
215: }
216: LAB_00405b50:
217: cVar13 = local_bc;
218: pmVar8 = local_118;
219: if (mVar12 == (mbstate_t)0x0) {
220: cVar3 = local_a8;
221: if (local_bc == '\0') {
222: if (local_c8 == '\0') {
223: if ((*(uint *)(&DAT_00408f00 + (ulong)(*(byte *)&local_b8->__count >> 5) * 4) >>
224: (*(byte *)&local_b8->__count & 0x1f) & 1) == 0) {
225: *(undefined8 *)(puVar11 + -8) = 0x406151;
226: iVar5 = mbsinit(pmVar8,puVar11[-8]);
227: if (iVar5 != 0) {
228: local_c8 = '\x01';
229: goto LAB_00406160;
230: }
231: goto LAB_0040625a;
232: }
233: local_b0 = 1;
234: cVar13 = '\x01';
235: local_a8 = '\x01';
236: local_a4[0] = (int)*(char *)&local_b8->__count;
237: }
238: else {
239: LAB_00406160:
240: *(undefined8 *)(puVar11 + -8) = 0x406165;
241: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
242: pmVar8 = local_b8;
243: *(undefined8 *)(puVar11 + -8) = 0x406177;
244: uVar10 = FUN_00403bc0(pmVar8,sVar9);
245: *(undefined8 *)(puVar11 + -8) = 0x406198;
246: local_b0 = FUN_00405130(local_a4,pmVar8,uVar10);
247: pmVar8 = local_b8;
248: if (local_b0 == 0xffffffffffffffff) {
249: local_b0 = 1;
250: local_a8 = '\0';
251: }
252: else {
253: if (local_b0 == 0xfffffffffffffffe) {
254: *(undefined8 *)(puVar11 + -8) = 0x406247;
255: local_b0 = strlen((char *)pmVar8,puVar11[-8]);
256: local_a8 = '\0';
257: }
258: else {
259: if (local_b0 == 0) {
260: local_b0 = 1;
261: if (*(char *)&local_b8->__count != '\0') goto LAB_0040629b;
262: if (local_a4[0] != 0) goto LAB_00406273;
263: }
264: local_a8 = '\x01';
265: cVar13 = '\x01';
266: *(undefined8 *)(puVar11 + -8) = 0x4061fa;
267: iVar5 = mbsinit(&local_c4,puVar11[-8]);
268: if (iVar5 != 0) {
269: local_c8 = '\0';
270: }
271: }
272: }
273: }
274: local_bc = '\x01';
275: cVar3 = cVar13;
276: }
277: if ((cVar3 == '\0') || (local_a4[0] != 0)) {
278: local_b8 = (mbstate_t *)((long)&local_b8->__count + local_b0);
279: local_78 = (mbstate_t *)((long)&local_78->__count + (long)local_70);
280: local_bc = '\0';
281: local_7c = 0;
282: LAB_00405e4b:
283: local_7c = '\0';
284: LAB_00405e4e:
285: cVar13 = local_7c;
286: pmVar8 = local_128;
287: if (local_88 == '\0') {
288: if ((*(uint *)(&DAT_00408f00 + (ulong)(*(byte *)&local_78->__count >> 5) * 4) >>
289: (*(byte *)&local_78->__count & 0x1f) & 1) == 0) {
290: *(undefined8 *)(puVar11 + -8) = 0x405edc;
291: iVar5 = mbsinit(pmVar8,puVar11[-8]);
292: if (iVar5 != 0) {
293: local_88 = '\x01';
294: goto LAB_00405ee8;
295: }
296: goto LAB_0040625a;
297: }
298: local_70 = (mbstate_t)0x1;
299: cVar13 = '\x01';
300: local_68 = '\x01';
301: local_64[0] = (int)*(char *)&local_78->__count;
302: }
303: else {
304: LAB_00405ee8:
305: *(undefined8 *)(puVar11 + -8) = 0x405eed;
306: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
307: pmVar8 = local_78;
308: *(undefined8 *)(puVar11 + -8) = 0x405efc;
309: uVar10 = FUN_00403bc0(pmVar8,sVar9);
310: *(undefined8 *)(puVar11 + -8) = 0x405f17;
311: local_70 = (mbstate_t)FUN_00405130(local_64,pmVar8,uVar10);
312: pmVar8 = local_78;
313: if (local_70 == (mbstate_t)0xffffffffffffffff) {
314: local_70 = (mbstate_t)0x1;
315: local_68 = '\0';
316: }
317: else {
318: if (local_70 == (mbstate_t)0xfffffffffffffffe) {
319: *(undefined8 *)(puVar11 + -8) = 0x406217;
320: local_70 = (mbstate_t)strlen((char *)pmVar8,puVar11[-8]);
321: local_68 = '\0';
322: }
323: else {
324: if (local_70 == (mbstate_t)0x0) {
325: local_70 = (mbstate_t)0x1;
326: if (*(char *)&local_78->__count != '\0') goto LAB_0040629b;
327: if (local_64[0] != 0) goto LAB_00406273;
328: }
329: local_68 = '\x01';
330: cVar13 = '\x01';
331: *(undefined8 *)(puVar11 + -8) = 0x405f6b;
332: iVar5 = mbsinit(&local_84,puVar11[-8]);
333: if (iVar5 != 0) {
334: local_88 = '\0';
335: }
336: }
337: }
338: }
339: local_7c = '\x01';
340: if (cVar13 == '\0') goto LAB_00405b37;
341: LAB_00405e9b:
342: if (local_64[0] == 0) goto LAB_00406032;
343: pmVar8 = pmVar6 + (long)mVar12 * 6;
344: if (*(char *)&pmVar8[2].__count == '\0') goto LAB_00405b42;
345: if (local_64[0] == pmVar8[2].__value) goto LAB_00406004;
346: goto LAB_00405b50;
347: }
348: goto LAB_00405c19;
349: }
350: lVar14 = *(long *)((long)&pmVar6[(long)mVar12].__count + local_110);
351: mVar12 = (mbstate_t)((long)mVar12 - lVar14);
352: } while (lVar14 == 0);
353: cVar13 = local_a8;
354: if (local_bc == '\0') goto LAB_00405bb0;
355: do {
356: if ((cVar13 != '\0') && (local_a4[0] == 0)) {
357: LAB_00405c19:
358: /* WARNING: Subroutine does not return */
359: *(undefined8 *)(puVar11 + -8) = 0x405c1e;
360: abort(puVar11[-8]);
361: }
362: local_b8 = (mbstate_t *)((long)&local_b8->__count + local_b0);
363: lVar14 = lVar14 + -1;
364: local_bc = '\0';
365: if (lVar14 == 0) goto LAB_00405b20;
366: LAB_00405bb0:
367: cVar13 = local_bc;
368: pmVar8 = local_118;
369: if (local_c8 == '\0') {
370: if ((*(uint *)(&DAT_00408f00 + (ulong)(*(byte *)&local_b8->__count >> 5) * 4) >>
371: (*(byte *)&local_b8->__count & 0x1f) & 1) == 0) {
372: *(undefined8 *)(puVar11 + -8) = 0x405c4c;
373: iVar5 = mbsinit(pmVar8,puVar11[-8]);
374: if (iVar5 != 0) {
375: local_c8 = '\x01';
376: goto LAB_00405c5b;
377: }
378: goto LAB_0040625a;
379: }
380: local_b0 = 1;
381: cVar13 = '\x01';
382: local_a8 = '\x01';
383: local_a4[0] = (int)*(char *)&local_b8->__count;
384: }
385: else {
386: LAB_00405c5b:
387: *(undefined8 *)(puVar11 + -8) = 0x405c60;
388: sVar9 = __ctype_get_mb_cur_max(puVar11[-8]);
389: pmVar8 = local_b8;
390: *(undefined8 *)(puVar11 + -8) = 0x405c72;
391: uVar10 = FUN_00403bc0(pmVar8,sVar9);
392: *(undefined8 *)(puVar11 + -8) = 0x405c8c;
393: local_b0 = FUN_00405130(local_a4,pmVar8,uVar10);
394: pmVar8 = local_b8;
395: if (local_b0 == 0xffffffffffffffff) {
396: local_b0 = 1;
397: local_a8 = '\0';
398: }
399: else {
400: if (local_b0 == 0xfffffffffffffffe) {
401: *(undefined8 *)(puVar11 + -8) = 0x405d2c;
402: local_b0 = strlen((char *)pmVar8,puVar11[-8]);
403: local_a8 = '\0';
404: }
405: else {
406: if (local_b0 == 0) {
407: local_b0 = 1;
408: if (*(char *)&local_b8->__count != '\0') goto LAB_0040629b;
409: if (local_a4[0] != 0) goto LAB_00406273;
410: }
411: local_a8 = '\x01';
412: cVar13 = '\x01';
413: *(undefined8 *)(puVar11 + -8) = 0x405cf0;
414: iVar5 = mbsinit(&local_c4,puVar11[-8]);
415: if (iVar5 != 0) {
416: local_c8 = '\0';
417: }
418: }
419: }
420: }
421: local_bc = '\x01';
422: } while( true );
423: }
424: LAB_00405a20:
425: cVar13 = *(char *)&pmVar8->__count;
426: do {
427: pmVar7 = pmVar6 + lVar14 * 6;
428: if ((cVar13 == '\0') || (*(char *)&pmVar7[2].__count == '\0')) {
429: mVar1 = pmVar8[-1];
430: if (mVar1 == pmVar7[1]) {
431: mVar2 = pmVar8[-2];
432: __s2 = *pmVar7;
433: *(undefined8 *)(puVar11 + -8) = 0x405a7d;
434: iVar5 = memcmp((void *)mVar2,(void *)__s2,(size_t)mVar1,puVar11[-8]);
435: if (iVar5 == 0) goto LAB_00405a81;
436: }
437: }
438: else {
439: if (pmVar8->__value == pmVar7[2].__value) {
440: LAB_00405a81:
441: lVar14 = lVar14 + 1;
442: local_118[(long)mVar12] = (mbstate_t)((long)mVar12 - lVar14);
443: goto LAB_00405a96;
444: }
445: }
446: if (lVar14 == 0) break;
447: lVar14 = lVar14 - *(long *)((long)&pmVar6[lVar14].__count + local_110);
448: } while( true );
449: local_118[(long)mVar12] = mVar12;
450: LAB_00405a96:
451: mVar12 = (mbstate_t)((long)mVar12 + 1);
452: pmVar8 = pmVar8 + 6;
453: if (local_120 == mVar12) goto LAB_00405aab;
454: goto LAB_00405a20;
455: LAB_00406004:
456: mVar12 = (mbstate_t)((long)mVar12 + 1);
457: local_78 = (mbstate_t *)((long)&local_78->__count + (long)local_70);
458: local_7c = '\0';
459: if (local_120 == mVar12) {
460: *local_130 = local_b8;
461: LAB_00406032:
462: *(undefined8 *)(puVar11 + -8) = 0x40603a;
463: FUN_004078e0(pmVar6);
464: uVar10 = 1;
465: goto LAB_004058e5;
466: }
467: goto LAB_00405e4b;
468: }
469: 
