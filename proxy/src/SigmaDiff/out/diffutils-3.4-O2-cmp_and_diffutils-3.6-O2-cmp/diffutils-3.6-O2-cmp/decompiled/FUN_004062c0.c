1: 
2: /* WARNING: Could not reconcile some variable overlaps */
3: 
4: byte * FUN_004062c0(byte *param_1,byte *param_2)
5: 
6: {
7: byte bVar1;
8: byte *pbVar2;
9: bool bVar3;
10: long lVar4;
11: char cVar5;
12: int iVar6;
13: size_t sVar7;
14: byte *pbVar8;
15: undefined8 uVar9;
16: ulong uVar10;
17: ulong uVar11;
18: long lVar12;
19: byte *pbVar13;
20: ulong uVar14;
21: ulong uVar15;
22: long in_FS_OFFSET;
23: bool bVar16;
24: ulong local_1c0;
25: byte *local_190;
26: undefined local_188;
27: mbstate_t local_184;
28: undefined local_17c;
29: byte *local_178;
30: size_t local_170;
31: char local_168;
32: uint local_164 [7];
33: char local_148;
34: mbstate_t local_144;
35: char local_13c;
36: byte *local_138;
37: size_t local_130;
38: char local_128;
39: int local_124 [7];
40: undefined4 local_108;
41: mbstate_t mStack260;
42: undefined4 uStack252;
43: byte *local_f8;
44: size_t local_f0;
45: undefined4 local_e8;
46: uint uStack228;
47: undefined8 local_e0;
48: undefined8 local_d8;
49: undefined8 local_d0;
50: undefined local_c8 [8];
51: undefined8 local_c0;
52: byte *local_b8;
53: size_t local_b0;
54: undefined8 local_a8;
55: undefined8 local_a0;
56: undefined8 local_98;
57: undefined8 local_90;
58: char local_88;
59: mbstate_t local_84;
60: undefined local_7c;
61: byte *local_78;
62: size_t local_70;
63: char local_68;
64: uint local_64 [9];
65: long local_40;
66: 
67: local_40 = *(long *)(in_FS_OFFSET + 0x28);
68: sVar7 = __ctype_get_mb_cur_max();
69: pbVar8 = param_1;
70: if (sVar7 < 2) {
71: bVar1 = *param_2;
72: if (bVar1 != 0) {
73: if (*param_1 != 0) {
74: uVar15 = 0;
75: uVar14 = 0;
76: bVar3 = true;
77: uVar10 = 0;
78: pbVar13 = param_2;
79: LAB_00406554:
80: pbVar2 = param_1;
81: uVar11 = uVar10;
82: param_1 = pbVar2 + 1;
83: if ((9 < uVar14) && (bVar3)) {
84: if (uVar11 < uVar14 * 5) {
85: LAB_0040659e:
86: bVar3 = true;
87: }
88: else {
89: if (pbVar13 != (byte *)0x0) {
90: sVar7 = strnlen((char *)pbVar13,uVar11 - uVar15);
91: pbVar13 = pbVar13 + sVar7;
92: uVar15 = uVar11;
93: if (*pbVar13 != 0) goto LAB_0040659e;
94: }
95: sVar7 = strlen((char *)param_2);
96: cVar5 = FUN_004056d0(pbVar2,param_2,sVar7);
97: pbVar8 = local_190;
98: if (cVar5 != '\0') goto LAB_00406680;
99: pbVar13 = (byte *)0x0;
100: bVar3 = false;
101: }
102: }
103: uVar14 = uVar14 + 1;
104: if (bVar1 == *pbVar2) {
105: pbVar8 = pbVar2;
106: if (param_2[1] == 0) goto LAB_00406680;
107: if (*param_1 == 0) goto LAB_004066b0;
108: uVar10 = uVar11 + 2;
109: if (*param_1 == param_2[1]) {
110: do {
111: lVar12 = uVar10 + -uVar11;
112: if (param_2[lVar12] == 0) goto LAB_00406680;
113: lVar4 = uVar10 + -uVar11;
114: if (pbVar2[lVar4] == 0) goto LAB_004066b0;
115: uVar10 = uVar10 + 1;
116: } while (param_2[lVar12] == pbVar2[lVar4]);
117: }
118: goto LAB_00406554;
119: }
120: if (*param_1 != 0) {
121: uVar10 = uVar11 + 1;
122: goto LAB_00406554;
123: }
124: }
125: LAB_004066b0:
126: pbVar8 = (byte *)0x0;
127: }
128: goto LAB_00406680;
129: }
130: bVar1 = *param_2;
131: local_188 = 0;
132: local_184 = (mbstate_t)0x0;
133: local_17c = 0;
134: local_178 = param_2;
135: if ((*(uint *)(&DAT_00408f00 + (ulong)(bVar1 >> 5) * 4) >> ((int)(char)bVar1 & 0x1fU) & 1) == 0) {
136: iVar6 = mbsinit(&local_184);
137: if (iVar6 == 0) {
138: LAB_0040729d:
139: /* WARNING: Subroutine does not return */
140: __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
141: }
142: local_188 = 1;
143: sVar7 = __ctype_get_mb_cur_max();
144: pbVar13 = local_178;
145: uVar9 = FUN_00403bc0(local_178,sVar7);
146: local_170 = FUN_00405130(local_164,pbVar13,uVar9,&local_184);
147: if (local_170 == 0xffffffffffffffff) {
148: local_170 = 1;
149: }
150: else {
151: if (local_170 != 0xfffffffffffffffe) {
152: if (local_170 == 0) {
153: local_170 = 1;
154: if (*local_178 != 0) {
155: LAB_00407303:
156: /* WARNING: Subroutine does not return */
157: __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
158: }
159: if (local_164[0] != 0) {
160: LAB_00407061:
161: /* WARNING: Subroutine does not return */
162: __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
163: }
164: }
165: local_168 = '\x01';
166: iVar6 = mbsinit(&local_184);
167: if (iVar6 != 0) {
168: local_188 = 0;
169: }
170: goto LAB_0040634c;
171: }
172: local_170 = strlen((char *)local_178);
173: }
174: local_168 = '\0';
175: }
176: else {
177: local_170 = 1;
178: local_168 = '\x01';
179: local_164[0] = (int)(char)bVar1;
180: LAB_0040634c:
181: local_17c = 1;
182: if (local_164[0] == 0) {
183: LAB_00406680:
184: if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
185: /* WARNING: Subroutine does not return */
186: __stack_chk_fail();
187: }
188: return pbVar8;
189: }
190: }
191: local_17c = 1;
192: local_148 = '\0';
193: local_144 = (mbstate_t)0x0;
194: uVar15 = 0;
195: local_13c = '\0';
196: local_108 = local_108 & 0xffffff00;
197: uVar10 = 0;
198: mStack260.__count = 0;
199: mStack260.__value = 0;
200: local_1c0 = 0;
201: bVar3 = true;
202: local_138 = param_2;
203: local_f8 = param_1;
204: do {
205: uVar14 = local_1c0;
206: uStack252 = uStack252 & 0xffffff00;
207: if ((char)local_108 == '\0') {
208: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_f8 >> 5) * 4) >> (*local_f8 & 0x1f) & 1) == 0) {
209: iVar6 = mbsinit(&mStack260);
210: if (iVar6 != 0) {
211: local_108 = CONCAT31(local_108._1_3_,1);
212: goto LAB_00406731;
213: }
214: goto LAB_0040729d;
215: }
216: local_f0 = 1;
217: uStack228 = SEXT14((char)*local_f8);
218: local_e8 = CONCAT31(local_e8._1_3_,1);
219: LAB_0040642d:
220: uStack252 = CONCAT31(uStack252._1_3_,1);
221: if (uStack228 == 0) goto LAB_004066b0;
222: if ((uVar15 < 10) || (!bVar3)) {
223: LAB_004069a5:
224: local_1c0 = uVar10;
225: if (local_168 == '\0') goto LAB_00406f80;
226: sVar7 = local_f0;
227: uVar10 = local_1c0;
228: uVar11 = uVar14 + 1;
229: if (uStack228 != local_164[0]) goto LAB_00406bd9;
230: LAB_004069c1:
231: uVar11 = uVar14 + 1;
232: local_c8 = CONCAT44(mStack260.__count,local_108);
233: local_a8 = CONCAT44(uStack228,local_e8);
234: local_88 = '\0';
235: local_84 = (mbstate_t)0x0;
236: local_7c = 0;
237: local_a0 = local_e0;
238: local_c0._0_5_ = (uint5)mStack260.__value;
239: local_b8 = local_f8 + local_f0;
240: local_98 = local_d8;
241: local_b0 = local_f0;
242: bVar1 = *param_2;
243: local_90 = local_d0;
244: local_78 = param_2;
245: if ((*(uint *)(&DAT_00408f00 + (ulong)(bVar1 >> 5) * 4) >> ((int)(char)bVar1 & 0x1fU) & 1)
246: == 0) {
247: iVar6 = mbsinit(&local_84);
248: if (iVar6 == 0) goto LAB_0040729d;
249: local_88 = '\x01';
250: sVar7 = __ctype_get_mb_cur_max();
251: pbVar8 = local_78;
252: uVar9 = FUN_00403bc0(local_78,sVar7);
253: local_70 = FUN_00405130(local_64,pbVar8,uVar9,&local_84);
254: if (local_70 == 0xffffffffffffffff) {
255: local_70 = 1;
256: local_68 = '\0';
257: goto LAB_004065d9;
258: }
259: if (local_70 == 0xfffffffffffffffe) {
260: local_70 = strlen((char *)local_78);
261: local_68 = '\0';
262: goto LAB_004065d9;
263: }
264: if (local_70 == 0) {
265: local_70 = 1;
266: if (*local_78 != 0) goto LAB_00407303;
267: if (local_64[0] != 0) goto LAB_00407061;
268: }
269: local_68 = '\x01';
270: iVar6 = mbsinit(&local_84);
271: if (iVar6 != 0) {
272: local_88 = '\0';
273: }
274: }
275: else {
276: local_70 = 1;
277: local_68 = '\x01';
278: local_64[0] = (int)(char)bVar1;
279: }
280: local_7c = 1;
281: if (local_64[0] == 0) {
282: /* WARNING: Subroutine does not return */
283: abort();
284: }
285: LAB_004065d9:
286: local_78 = local_78 + local_70;
287: do {
288: local_7c = 0;
289: uVar11 = uVar11 + 1;
290: if (local_88 == '\0') {
291: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_78 >> 5) * 4) >> (*local_78 & 0x1f) & 1)
292: == 0) {
293: iVar6 = mbsinit(&local_84);
294: if (iVar6 != 0) {
295: local_88 = '\x01';
296: goto LAB_00406d40;
297: }
298: goto LAB_0040729d;
299: }
300: local_70 = 1;
301: local_64[0] = SEXT14((char)*local_78);
302: local_68 = '\x01';
303: LAB_0040665a:
304: local_7c = 1;
305: pbVar8 = local_f8;
306: if (local_64[0] == 0) goto LAB_00406680;
307: }
308: else {
309: LAB_00406d40:
310: sVar7 = __ctype_get_mb_cur_max();
311: pbVar8 = local_78;
312: uVar9 = FUN_00403bc0(local_78,sVar7);
313: local_70 = FUN_00405130(local_64,pbVar8,uVar9,&local_84);
314: if (local_70 == 0xffffffffffffffff) {
315: local_70 = 1;
316: }
317: else {
318: if (local_70 != 0xfffffffffffffffe) {
319: if (local_70 == 0) {
320: local_70 = 1;
321: if (*local_78 != 0) goto LAB_00407303;
322: if (local_64[0] != 0) goto LAB_00407061;
323: }
324: local_68 = '\x01';
325: iVar6 = mbsinit(&local_84);
326: if (iVar6 != 0) {
327: local_88 = '\0';
328: }
329: goto LAB_0040665a;
330: }
331: local_70 = strlen((char *)local_78);
332: }
333: local_68 = '\0';
334: }
335: local_7c = 1;
336: uVar10 = local_1c0;
337: if (local_c0._4_1_ == '\0') {
338: if (local_c8[0] == '\0') {
339: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1)
340: == 0) {
341: iVar6 = mbsinit((mbstate_t *)(local_c8 + 4));
342: if (iVar6 != 0) {
343: local_c8 = CONCAT71(local_c8._1_7_,1);
344: goto LAB_00406dfa;
345: }
346: goto LAB_0040729d;
347: }
348: local_b0 = 1;
349: local_c0._4_1_ = '\x01';
350: local_a8 = CONCAT71(local_a8._1_7_,1);
351: local_a8 = local_a8 & 0xffffffff | (ulong)(uint)(int)(char)*local_b8 << 0x20;
352: }
353: else {
354: LAB_00406dfa:
355: sVar7 = __ctype_get_mb_cur_max();
356: pbVar8 = local_b8;
357: uVar9 = FUN_00403bc0(local_b8,sVar7);
358: local_b0 = FUN_00405130((long)&local_a8 + 4,pbVar8,uVar9,local_c8 + 4);
359: if (local_b0 == 0xffffffffffffffff) {
360: local_b0 = 1;
361: local_a8 = (ulong)local_a8._1_7_ << 8;
362: }
363: else {
364: if (local_b0 == 0xfffffffffffffffe) {
365: local_b0 = strlen((char *)local_b8);
366: local_a8 = local_a8 & 0xffffffffffffff00;
367: }
368: else {
369: if (local_b0 == 0) {
370: local_b0 = 1;
371: if (*local_b8 != 0) goto LAB_00407303;
372: if (local_a8._4_4_ != 0) goto LAB_00407061;
373: }
374: local_a8 = CONCAT71(local_a8._1_7_,1);
375: local_c0._4_1_ = '\x01';
376: iVar6 = mbsinit((mbstate_t *)(local_c8 + 4));
377: if (iVar6 != 0) {
378: local_c8 = local_c8 & 0xffffffffffffff00;
379: }
380: }
381: }
382: }
383: local_c0._0_5_ = CONCAT14(1,(undefined4)local_c0);
384: local_c0 = local_c0 & 0xffffff0000000000 | (ulong)(uint5)local_c0;
385: if (local_c0._4_1_ != '\0') goto LAB_00406cf8;
386: LAB_00406c5a:
387: sVar7 = local_f0;
388: if (local_b0 != local_70) goto LAB_00406bd9;
389: iVar6 = memcmp(local_b8,local_78,local_b0);
390: bVar16 = iVar6 != 0;
391: }
392: else {
393: if ((char)local_a8 == '\0') goto LAB_00406c5a;
394: LAB_00406cf8:
395: if (local_a8._4_4_ == 0) goto LAB_004066b0;
396: if (local_68 == '\0') goto LAB_00406c5a;
397: bVar16 = local_64[0] != local_a8._4_4_;
398: }
399: sVar7 = local_f0;
400: if (bVar16) goto LAB_00406bd9;
401: local_c0 = local_c0 & 0xffffff00ffffffff;
402: local_b8 = local_b8 + local_b0;
403: local_78 = local_78 + local_70;
404: } while( true );
405: }
406: if (local_1c0 < uVar15 * 5) {
407: bVar3 = true;
408: goto LAB_004069a5;
409: }
410: LAB_00406889:
411: lVar12 = local_1c0 - uVar10;
412: if (lVar12 == 0) {
413: cVar5 = local_128;
414: if (local_13c == '\0') goto LAB_004070b0;
415: LAB_00407113:
416: if ((cVar5 != '\0') && (local_124[0] == 0)) goto LAB_0040696d;
417: bVar3 = true;
418: }
419: else {
420: if (local_13c == '\0') goto LAB_004068e6;
421: if (local_128 != '\0') goto LAB_0040694e;
422: do {
423: do {
424: local_138 = local_138 + local_130;
425: lVar12 = lVar12 + -1;
426: local_13c = '\0';
427: if (lVar12 == 0) goto LAB_004070b0;
428: LAB_004068e6:
429: cVar5 = local_13c;
430: if (local_148 == '\0') {
431: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_138 >> 5) * 4) >> (*local_138 & 0x1f) &
432: 1) == 0) {
433: iVar6 = mbsinit(&local_144);
434: if (iVar6 != 0) {
435: local_148 = '\x01';
436: goto LAB_00406aea;
437: }
438: goto LAB_0040729d;
439: }
440: local_130 = 1;
441: local_124[0] = (int)(char)*local_138;
442: cVar5 = '\x01';
443: local_128 = '\x01';
444: }
445: else {
446: LAB_00406aea:
447: sVar7 = __ctype_get_mb_cur_max();
448: pbVar8 = local_138;
449: uVar9 = FUN_00403bc0(local_138,sVar7);
450: local_130 = FUN_00405130(local_124,pbVar8,uVar9);
451: if (local_130 == 0xffffffffffffffff) {
452: local_130 = 1;
453: local_128 = '\0';
454: }
455: else {
456: if (local_130 == 0xfffffffffffffffe) {
457: local_130 = strlen((char *)local_138);
458: local_128 = '\0';
459: }
460: else {
461: if (local_130 == 0) {
462: local_130 = 1;
463: if (*local_138 != 0) goto LAB_00407303;
464: if (local_124[0] != 0) goto LAB_00407061;
465: }
466: local_128 = '\x01';
467: cVar5 = '\x01';
468: iVar6 = mbsinit(&local_144);
469: if (iVar6 != 0) {
470: local_148 = '\0';
471: }
472: }
473: }
474: }
475: local_13c = '\x01';
476: } while (cVar5 == '\0');
477: LAB_0040694e:
478: } while (local_124[0] != 0);
479: if (local_13c == '\0') {
480: LAB_004070b0:
481: if (local_148 == '\0') {
482: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_138 >> 5) * 4) >> (*local_138 & 0x1f) & 1)
483: == 0) {
484: iVar6 = mbsinit(&local_144);
485: if (iVar6 != 0) {
486: local_148 = '\x01';
487: goto LAB_0040716a;
488: }
489: goto LAB_0040729d;
490: }
491: local_130 = 1;
492: local_124[0] = (int)(char)*local_138;
493: cVar5 = '\x01';
494: local_128 = '\x01';
495: }
496: else {
497: LAB_0040716a:
498: sVar7 = __ctype_get_mb_cur_max();
499: pbVar8 = local_138;
500: uVar9 = FUN_00403bc0(local_138,sVar7);
501: local_130 = FUN_00405130(local_124,pbVar8,uVar9);
502: if (local_130 == 0xffffffffffffffff) {
503: local_130 = 1;
504: local_128 = '\0';
505: cVar5 = '\0';
506: }
507: else {
508: if (local_130 == 0xfffffffffffffffe) {
509: local_130 = strlen((char *)local_138);
510: local_128 = '\0';
511: cVar5 = '\0';
512: }
513: else {
514: if (local_130 == 0) {
515: local_130 = 1;
516: if (*local_138 != 0) goto LAB_00407303;
517: if (local_124[0] != 0) goto LAB_00407061;
518: }
519: local_128 = '\x01';
520: iVar6 = mbsinit(&local_144);
521: cVar5 = '\x01';
522: if (iVar6 != 0) {
523: local_148 = '\0';
524: }
525: }
526: }
527: }
528: local_13c = '\x01';
529: goto LAB_00407113;
530: }
531: LAB_0040696d:
532: cVar5 = FUN_00405880(param_1,param_2,&local_190);
533: pbVar8 = local_190;
534: if (cVar5 != '\0') goto LAB_00406680;
535: bVar3 = false;
536: }
537: uVar10 = local_1c0;
538: if ((char)local_e8 != '\0') goto LAB_004069a5;
539: LAB_00406f80:
540: sVar7 = local_f0;
541: uVar10 = local_1c0;
542: uVar11 = uVar14 + 1;
543: if (local_f0 == local_170) goto LAB_00406fa0;
544: }
545: else {
546: LAB_00406731:
547: sVar7 = __ctype_get_mb_cur_max();
548: pbVar8 = local_f8;
549: uVar9 = FUN_00403bc0(local_f8,sVar7);
550: local_f0 = FUN_00405130(&uStack228,pbVar8,uVar9);
551: if (local_f0 == 0xffffffffffffffff) {
552: local_f0 = 1;
553: local_e8 = (uint)local_e8._1_3_;
554: }
555: else {
556: if (local_f0 != 0xfffffffffffffffe) {
557: if (local_f0 == 0) {
558: local_f0 = 1;
559: if (*local_f8 != 0) goto LAB_00407303;
560: if (uStack228 != 0) goto LAB_00407061;
561: }
562: local_e8 = CONCAT31(local_e8._1_3_,1);
563: iVar6 = mbsinit(&mStack260);
564: if (iVar6 != 0) {
565: local_108 = local_108 & 0xffffff00;
566: }
567: goto LAB_0040642d;
568: }
569: local_f0 = strlen((char *)local_f8);
570: local_e8 = local_e8 >> 8;
571: }
572: local_e8 = local_e8 << 8;
573: uStack252 = CONCAT31(uStack252._1_3_,1);
574: if ((9 < uVar15) && (bVar3)) {
575: if (uVar15 * 5 <= local_1c0) goto LAB_00406889;
576: bVar3 = true;
577: }
578: local_1c0 = local_1c0 + 1;
579: sVar7 = local_f0;
580: uVar11 = local_1c0;
581: if (local_f0 == local_170) {
582: LAB_00406fa0:
583: sVar7 = local_f0;
584: local_1c0 = uVar14 + 1;
585: iVar6 = memcmp(local_f8,local_178,local_f0);
586: uVar11 = local_1c0;
587: local_1c0 = uVar10;
588: if (iVar6 == 0) goto LAB_004069c1;
589: }
590: }
591: LAB_00406bd9:
592: local_1c0 = uVar11;
593: local_f8 = local_f8 + sVar7;
594: uVar15 = uVar15 + 1;
595: } while( true );
596: }
597: 
