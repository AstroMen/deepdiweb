1: 
2: /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
3: 
4: undefined8 FUN_004018a0(int param_1,undefined8 *param_2)
5: 
6: {
7: char cVar1;
8: undefined uVar2;
9: undefined uVar3;
10: FILE *__stream;
11: byte *pbVar4;
12: char cVar5;
13: int iVar6;
14: long lVar7;
15: long *plVar8;
16: long *plVar9;
17: long *plVar10;
18: undefined *puVar11;
19: long *plVar12;
20: long *plVar13;
21: undefined8 uVar14;
22: char *pcVar15;
23: long lVar16;
24: long lVar17;
25: long lVar18;
26: undefined8 uVar19;
27: undefined8 uVar20;
28: undefined8 uVar21;
29: int *piVar22;
30: undefined **ppuVar23;
31: uint uVar24;
32: ulong uVar25;
33: long *plVar26;
34: long *plVar27;
35: int iVar28;
36: long in_FS_OFFSET;
37: long *local_200;
38: long local_1f8;
39: long local_1e8;
40: int local_1e0;
41: bool local_1d9;
42: int local_1d8;
43: long *local_1c0;
44: stat local_1b8;
45: stat local_128;
46: undefined local_98 [16];
47: undefined local_88 [16];
48: undefined local_78 [32];
49: undefined local_58 [24];
50: long local_40;
51: 
52: local_40 = *(long *)(in_FS_OFFSET + 0x28);
53: DAT_0060a238 = 2;
54: FUN_00402e20(*param_2);
55: setlocale(6,"");
56: bindtextdomain("diffutils","/home/ericlee/projects/input3/binaries/share/locale");
57: textdomain("diffutils");
58: FUN_00402c30(0);
59: LAB_0040190b:
60: ppuVar23 = &PTR_s_print-bytes_00408520;
61: iVar6 = getopt_long(param_1,param_2,"bci:ln:sv",&PTR_s_print-bytes_00408520,0);
62: uVar14 = DAT_0060c458;
63: if (iVar6 == -1) goto LAB_00401bb9;
64: switch(iVar6) {
65: case 0x62:
66: case 99:
67: DAT_0060a2b2 = '\x01';
68: goto LAB_0040190b;
69: default:
70: FUN_00402930(0,0);
71: goto LAB_00401bb9;
72: case 0x69:
73: FUN_00402990(0,&optarg,0x3a);
74: pcVar15 = optarg + 1;
75: if (*optarg == ':') {
76: optarg = pcVar15;
77: FUN_00402990(1,&optarg,0);
78: }
79: else {
80: optarg = pcVar15;
81: if (DAT_0060a2c8 < DAT_0060a2c0) {
82: DAT_0060a2c8 = DAT_0060a2c0;
83: }
84: }
85: goto LAB_0040190b;
86: case 0x6c:
87: if (DAT_0060a2b4 < 2) {
88: DAT_0060a2b4 = 1;
89: goto LAB_0040190b;
90: }
91: break;
92: case 0x6e:
93: iVar6 = FUN_00404a70(optarg,0,0,&local_1c0);
94: if (iVar6 == 0) {
95: if (local_1c0 < DAT_0060a228) {
96: DAT_0060a228 = local_1c0;
97: }
98: goto LAB_0040190b;
99: }
100: FUN_00402930("invalid --bytes value \'%s\'",optarg);
101: break;
102: case 0x73:
103: if ((DAT_0060a2b4 != 0) && (DAT_0060a2b4 != 3)) break;
104: DAT_0060a2b4 = 3;
105: goto LAB_0040190b;
106: case 0x76:
107: uVar14 = FUN_00403840("David MacKenzie");
108: uVar19 = FUN_004038d0("Torbjorn Granlund",&DAT_0040824a);
109: FUN_00404630(stdout,&DAT_0040827d,"GNU diffutils",PTR_DAT_0060a230,uVar19,uVar14,0,ppuVar23);
110: FUN_00402b20();
111: goto LAB_00401aae;
112: case 0x80:
113: uVar19 = dcgettext(0,"Usage: %s [OPTION]... FILE1 [FILE2 [SKIP1 [SKIP2]]]\n",5);
114: __printf_chk(1,uVar19,uVar14);
115: pcVar15 = (char *)dcgettext(0,"Compare two files byte by byte.",5);
116: puts(pcVar15);
117: uVar14 = dcgettext(0,
118: "The optional SKIP1 and SKIP2 specify the number of bytes to skip\nat the beginning of each file (zero by default)."
119: ,5);
120: __printf_chk(1,&DAT_00408281,uVar14);
121: __stream = stdout;
122: pcVar15 = (char *)dcgettext(0,
123: "Mandatory arguments to long options are mandatory for short options too.\n"
124: ,5);
125: ppuVar23 = &PTR_s_-b,_--print-bytes_print_differin_004084c0;
126: fputs_unlocked(pcVar15,__stream);
127: pcVar15 = "-b, --print-bytes          print differing bytes";
128: do {
129: ppuVar23 = ppuVar23 + 1;
130: uVar14 = dcgettext(0,pcVar15,5);
131: __printf_chk(1,"  %s\n",uVar14);
132: pcVar15 = *ppuVar23;
133: } while (pcVar15 != (char *)0x0);
134: uVar14 = dcgettext(0,"Exit status is 0 if inputs are the same, 1 if different, 2 if trouble.",5)
135: ;
136: uVar19 = dcgettext(0,"If a FILE is \'-\' or missing, read standard input.",5);
137: uVar20 = dcgettext(0,
138: "SKIP values may be followed by the following multiplicative suffixes:\nkB 1000, K 1024, MB 1,000,000, M 1,048,576,\nGB 1,000,000,000, G 1,073,741,824, and so on for T, P, E, Z, Y."
139: ,5);
140: __printf_chk(1,"\n%s\n\n%s\n%s\n",uVar20,uVar19,uVar14);
141: FUN_004046e0();
142: FUN_00402b20();
143: goto LAB_00401aae;
144: }
145: FUN_00402930("options -l and -s are incompatible",0);
146: goto LAB_004027cc;
147: LAB_00401bb9:
148: if (param_1 == optind) {
149: FUN_00402930("missing operand after \'%s\'",param_2[(long)param_1 + -1]);
150: LAB_004027e2:
151: pbVar4 = DAT_0060a438;
152: piVar22 = __errno_location();
153: /* WARNING: Subroutine does not return */
154: error(2,*piVar22,&DAT_0040820c,pbVar4);
155: }
156: DAT_0060a430 = (char *)param_2[optind];
157: DAT_0060a438 = &DAT_004086d2;
158: iVar6 = optind + 1;
159: if (optind + 1 < param_1) {
160: DAT_0060a438 = (byte *)param_2[(long)optind + 1];
161: iVar6 = optind + 2;
162: }
163: optind = iVar6;
164: iVar6 = 0;
165: do {
166: lVar7 = (long)optind;
167: if (param_1 <= optind) goto LAB_00401c4c;
168: optind = optind + 1;
169: local_1c0 = (long *)param_2[lVar7];
170: iVar28 = iVar6 + 1;
171: FUN_00402990(iVar6,&local_1c0,0);
172: iVar6 = iVar28;
173: } while (iVar28 != 2);
174: if (optind < param_1) {
175: FUN_00402930("extra operand \'%s\'",param_2[optind]);
176: }
177: LAB_00401c4c:
178: uVar24 = 0;
179: do {
180: iVar6 = 0x2d - (uint)*DAT_0060a438;
181: if (iVar6 == 0) {
182: iVar6 = -(uint)DAT_0060a438[1];
183: }
184: if (((uVar24 != 0) && (DAT_0060a2c0 == DAT_0060a2c8)) &&
185: (iVar28 = strcmp(DAT_0060a430,(char *)DAT_0060a438), iVar28 == 0)) goto LAB_00401aae;
186: lVar7 = (long)(int)(iVar6 == 0 ^ uVar24);
187: pcVar15 = (&DAT_0060a430)[lVar7];
188: if ((*pcVar15 == '-') && (pcVar15[1] == '\0')) {
189: (&DAT_0060a420)[lVar7] = 0;
190: iVar6 = 0;
191: }
192: else {
193: iVar6 = open(pcVar15,0,0);
194: (&DAT_0060a420)[lVar7] = iVar6;
195: if (iVar6 < 0) {
196: if (DAT_0060a2b4 == 3) {
197: /* WARNING: Subroutine does not return */
198: exit(2);
199: }
200: goto LAB_00401fa8;
201: }
202: }
203: iVar6 = __fxstat(1,iVar6,(stat *)(&DAT_0060a300 + lVar7 * 0x90));
204: if (iVar6 != 0) {
205: LAB_00401fa8:
206: piVar22 = __errno_location();
207: /* WARNING: Subroutine does not return */
208: error(2,*piVar22,&DAT_0040820c,(&DAT_0060a430)[lVar7]);
209: }
210: uVar24 = uVar24 + 1;
211: } while (uVar24 != 2);
212: if ((_DAT_0060a308 == DAT_0060a398) && (_DAT_0060a300 == DAT_0060a390)) {
213: LAB_0040234f:
214: if (((((DAT_0060a318 == DAT_0060a3a8) && (_DAT_0060a310 == DAT_0060a3a0)) &&
215: (_DAT_0060a31c == DAT_0060a3ac)) &&
216: ((_DAT_0060a320 == DAT_0060a3b0 && (DAT_0060a330 == DAT_0060a3c0)))) &&
217: ((_DAT_0060a358 == DAT_0060a3e8 && (_DAT_0060a368 == DAT_0060a3f8)))) {
218: lVar7 = FUN_00402a30(0);
219: lVar18 = FUN_00402a30(1);
220: if (lVar7 == lVar18) {
221: LAB_00401aae:
222: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
223: return 0;
224: }
225: /* WARNING: Subroutine does not return */
226: __stack_chk_fail();
227: }
228: }
229: LAB_00401d1d:
230: if (DAT_0060a2b4 != 3) goto LAB_00402178;
231: }
232: else {
233: if ((DAT_0060a318 & 0xf000) != 0x6000) {
234: if ((DAT_0060a318 & 0xf000) == 0x2000) {
235: if ((DAT_0060a3a8 & 0xf000) == 0x2000) goto LAB_00402409;
236: goto LAB_0040216b;
237: }
238: goto LAB_00401d1d;
239: }
240: if ((DAT_0060a3a8 & 0xf000) == 0x6000) {
241: LAB_00402409:
242: if (_DAT_0060a328 == DAT_0060a3b8) goto LAB_0040234f;
243: goto LAB_00401d1d;
244: }
245: LAB_0040216b:
246: if (DAT_0060a2b4 == 3) goto LAB_00401d40;
247: LAB_00402178:
248: iVar6 = __fxstat(1,1,&local_1b8);
249: if ((iVar6 != 0) || (iVar6 = __xstat(1,"/dev/null",&local_128), iVar6 != 0)) goto LAB_00402194;
250: if ((local_1b8.st_ino == local_128.st_ino) && (local_1b8.st_dev == local_128.st_dev)) {
251: LAB_00402535:
252: DAT_0060a2b4 = 2;
253: }
254: else {
255: if ((local_1b8.st_mode & 0xf000) == 0x6000) {
256: if ((local_128.st_mode & 0xf000) == 0x6000) goto LAB_0040251f;
257: }
258: else {
259: if (((local_1b8.st_mode & 0xf000) == 0x2000) && ((local_128.st_mode & 0xf000) == 0x2000)) {
260: LAB_0040251f:
261: if (local_1b8.st_rdev == local_128.st_rdev) goto LAB_00402535;
262: }
263: }
264: }
265: LAB_00402194:
266: if (DAT_0060a2b4 != 3) goto LAB_00401d40;
267: }
268: lVar7 = DAT_0060a330;
269: if (((DAT_0060a318 & 0xf000) == 0x8000) && ((DAT_0060a3a8 & 0xf000) == 0x8000)) {
270: lVar16 = FUN_00402a30(0);
271: lVar18 = DAT_0060a3c0;
272: lVar17 = FUN_00402a30(1);
273: plVar26 = (long *)(lVar7 - lVar16);
274: if ((long)(long *)(lVar7 - lVar16) < 0) {
275: plVar26 = (long *)0x0;
276: }
277: plVar8 = (long *)0x0;
278: if (-1 < (long)(long *)(lVar18 - lVar17)) {
279: plVar8 = (long *)(lVar18 - lVar17);
280: }
281: if (plVar8 != plVar26) {
282: if ((long)plVar26 < (long)plVar8) {
283: plVar8 = plVar26;
284: }
285: if (plVar8 < DAT_0060a228) {
286: /* WARNING: Subroutine does not return */
287: exit(1);
288: }
289: }
290: }
291: LAB_00401d40:
292: DAT_0060a2d0 = (long *)FUN_004050b0(DAT_0060a338,DAT_0060a3c8,0x7ffffffffffffff7);
293: pcVar15 = (char *)((long)DAT_0060a2d0 + 0xf);
294: plVar8 = (long *)FUN_00404760(((ulong)pcVar15 >> 3) << 4);
295: lVar7 = DAT_0060a330;
296: plVar26 = (long *)((long)plVar8 + ((ulong)pcVar15 & 0xfffffffffffffff8));
297: local_200 = DAT_0060a228;
298: _DAT_0060a2e0 = plVar8;
299: _DAT_0060a2e8 = plVar26;
300: if (DAT_0060a2b4 == 1) {
301: plVar10 = (long *)0x7fffffffffffffff;
302: if (-1 < (long)DAT_0060a228) {
303: plVar10 = DAT_0060a228;
304: }
305: if ((DAT_0060a318 & 0xf000) == 0x8000) {
306: lVar18 = FUN_00402a30(0);
307: if ((long)(long *)(lVar7 - lVar18) < (long)plVar10) {
308: plVar10 = (long *)(lVar7 - lVar18);
309: }
310: }
311: lVar7 = DAT_0060a3c0;
312: if ((DAT_0060a3a8 & 0xf000) == 0x8000) {
313: lVar18 = FUN_00402a30(1);
314: if ((long)(long *)(lVar7 - lVar18) < (long)plVar10) {
315: plVar10 = (long *)(lVar7 - lVar18);
316: }
317: }
318: local_1e0 = 1;
319: while (plVar10 = (long *)((long)plVar10 / 10), plVar10 != (long *)0x0) {
320: local_1e0 = local_1e0 + 1;
321: }
322: }
323: uVar25 = 0;
324: do {
325: plVar10 = (long *)(&DAT_0060a2c0)[uVar25];
326: if ((plVar10 != (long *)0x0) && (lVar7 = FUN_00402a30(uVar25 & 0xffffffff), lVar7 == -1)) {
327: do {
328: plVar9 = plVar10;
329: if (DAT_0060a2d0 <= plVar10) {
330: plVar9 = DAT_0060a2d0;
331: }
332: plVar13 = (long *)FUN_00405010((&DAT_0060a420)[uVar25],plVar8,plVar9);
333: if (plVar9 != plVar13) {
334: if (plVar13 == (long *)0xffffffffffffffff) {
335: piVar22 = __errno_location();
336: /* WARNING: Subroutine does not return */
337: error(2,*piVar22,&DAT_0040820c,(&DAT_0060a430)[(int)uVar25]);
338: }
339: break;
340: }
341: plVar10 = (long *)((long)plVar10 - (long)plVar9);
342: } while (plVar10 != (long *)0x0);
343: }
344: uVar25 = uVar25 + 1;
345: } while (uVar25 != 2);
346: local_1d8 = 0;
347: local_1f8 = 1;
348: local_1e8 = 1;
349: local_1d9 = true;
350: LAB_00401dea:
351: plVar10 = DAT_0060a2d0;
352: if (local_200 != (long *)0xffffffffffffffff) {
353: if (local_200 < DAT_0060a2d0) {
354: plVar10 = local_200;
355: }
356: local_200 = (long *)((long)local_200 - (long)plVar10);
357: }
358: plVar9 = (long *)FUN_00405010(DAT_0060a420,plVar8,plVar10);
359: pcVar15 = DAT_0060a430;
360: if (plVar9 == (long *)0xffffffffffffffff) {
361: piVar22 = __errno_location();
362: /* WARNING: Subroutine does not return */
363: error(2,*piVar22,&DAT_0040820c,pcVar15);
364: }
365: plVar10 = (long *)FUN_00405010(DAT_0060a424,plVar26,plVar10);
366: if (plVar10 == (long *)0xffffffffffffffff) goto LAB_004027e2;
367: plVar13 = plVar10;
368: if (plVar9 <= plVar10) {
369: plVar13 = plVar9;
370: }
371: iVar6 = memcmp(plVar8,plVar26,(size_t)plVar13);
372: if (iVar6 == 0) {
373: lVar7 = local_1f8 + (long)plVar13;
374: if ((DAT_0060a2b4 != 0) || (plVar27 = plVar13, plVar13 == (long *)0x0)) goto LAB_00401f16;
375: LAB_00401ed4:
376: local_1f8 = lVar7;
377: lVar7 = 0;
378: *(undefined *)((long)plVar8 + (long)plVar27) = 10;
379: plVar12 = plVar8;
380: while (puVar11 = (undefined *)rawmemchr(plVar12,10),
381: (undefined *)((long)plVar8 + (long)plVar27) != puVar11) {
382: plVar12 = (long *)(puVar11 + 1);
383: lVar7 = lVar7 + 1;
384: }
385: local_1e8 = local_1e8 + lVar7;
386: local_1d9 = *(char *)((long)plVar8 + -1 + (long)plVar27) == '\n';
387: lVar7 = local_1f8;
388: if (plVar27 < plVar13) {
389: LAB_004021a6:
390: uVar14 = FUN_00402d70(local_1f8,local_78);
391: uVar19 = FUN_00402d70(local_1e8,local_58);
392: if (DAT_0060a2b2 == '\0') {
393: pcVar15 = (char *)dcgettext(0,"%s %s differ: byte %s, line %s\n",5);
394: if ((pcVar15 == "%s %s differ: byte %s, line %s\n") &&
395: (cVar5 = FUN_00402d20(5), cVar5 == '\0')) {
396: pcVar15 = "%s %s differ: char %s, line %s\n";
397: }
398: __printf_chk(1,pcVar15,DAT_0060a430,DAT_0060a438,uVar14,uVar19);
399: }
400: else {
401: uVar2 = *(undefined *)((long)plVar8 + (long)plVar27);
402: uVar3 = *(undefined *)((long)plVar26 + (long)plVar27);
403: FUN_00402a80(local_98,uVar2);
404: FUN_00402a80(local_88,uVar3);
405: pbVar4 = DAT_0060a438;
406: pcVar15 = DAT_0060a430;
407: uVar20 = dcgettext(0,"%s %s differ: byte %s, line %s is %3o %s %3o %s\n",5);
408: __printf_chk(1,uVar20,pcVar15,pbVar4,uVar14,uVar19,uVar2,local_98,uVar3,local_88);
409: }
410: goto LAB_00402091;
411: }
412: LAB_00401f16:
413: local_1f8 = lVar7;
414: if (plVar9 == plVar10) {
415: if (plVar9 != DAT_0060a2d0) {
416: LAB_00401f2c:
417: uVar24 = (uint)(local_1d8 != 0);
418: LAB_00401f36:
419: iVar6 = close(DAT_0060a420);
420: if (iVar6 == 0) {
421: iVar6 = close(DAT_0060a424);
422: if (iVar6 == 0) {
423: if ((uVar24 != 0) && (DAT_0060a2b4 < 2)) {
424: FUN_00402b20();
425: }
426: /* WARNING: Subroutine does not return */
427: exit(uVar24);
428: }
429: LAB_004027cc:
430: lVar7 = 1;
431: }
432: else {
433: lVar7 = 0;
434: }
435: piVar22 = __errno_location();
436: /* WARNING: Subroutine does not return */
437: error(2,*piVar22,&DAT_0040820c,(&DAT_0060a430)[lVar7]);
438: }
439: goto LAB_00401dea;
440: }
441: if (DAT_0060a2b4 != 3) {
442: uVar14 = (&DAT_0060a430)[plVar10 < plVar9];
443: if (local_1f8 != 1) {
444: uVar19 = FUN_00402d70(local_1f8 + -1,local_78);
445: if (DAT_0060a2b4 == 0) {
446: uVar20 = FUN_00402d70(local_1e8 - (ulong)local_1d9,local_58);
447: if (local_1d9 == false) {
448: uVar21 = dcgettext(0,"cmp: EOF on %s after byte %s, in line %s\n",5);
449: }
450: else {
451: uVar21 = dcgettext(0,"cmp: EOF on %s after byte %s, line %s\n",5);
452: }
453: __fprintf_chk(stderr,1,uVar21,uVar14,uVar19,uVar20);
454: }
455: else {
456: uVar20 = dcgettext(0,"cmp: EOF on %s after byte %s\n",5);
457: __fprintf_chk(stderr,1,uVar20,uVar14,uVar19);
458: }
459: goto LAB_00402091;
460: }
461: uVar19 = dcgettext(0,"cmp: EOF on %s which is empty\n",5);
462: uVar24 = 1;
463: __fprintf_chk(stderr,1,uVar19,uVar14);
464: goto LAB_00401f36;
465: }
466: }
467: else {
468: *(byte *)((long)plVar8 + (long)plVar9) = ~*(byte *)((long)plVar26 + (long)plVar9);
469: *(byte *)((long)plVar26 + (long)plVar10) = ~*(byte *)((long)plVar8 + (long)plVar10);
470: plVar12 = plVar26;
471: plVar27 = plVar8;
472: while (*plVar27 == *plVar12) {
473: plVar27 = plVar27 + 1;
474: plVar12 = plVar12 + 1;
475: }
476: while (*(char *)plVar27 == *(char *)plVar12) {
477: plVar27 = (long *)((long)plVar27 + 1);
478: plVar12 = (long *)((long)plVar12 + 1);
479: }
480: plVar27 = (long *)((long)plVar27 - (long)plVar8);
481: lVar7 = local_1f8 + (long)plVar27;
482: if ((DAT_0060a2b4 == 0) && (plVar27 != (long *)0x0)) goto LAB_00401ed4;
483: if (plVar13 <= plVar27) goto LAB_00401f16;
484: if (DAT_0060a2b4 == 1) {
485: do {
486: cVar5 = *(char *)((long)plVar8 + (long)plVar27);
487: cVar1 = *(char *)((long)plVar26 + (long)plVar27);
488: if (cVar5 != cVar1) {
489: uVar14 = FUN_00402d70(local_1f8 + (long)plVar27,local_58);
490: if (DAT_0060a2b2 == '\0') {
491: __printf_chk(1,"%*s %3o %3o\n",local_1e0,uVar14,cVar5);
492: }
493: else {
494: FUN_00402a80(local_88,cVar5);
495: FUN_00402a80(local_78,cVar1);
496: __printf_chk(1,"%*s %3o %-4s %3o %s\n",local_1e0,uVar14,cVar5,local_88,cVar1,local_78);
497: }
498: }
499: plVar27 = (long *)((long)plVar27 + 1);
500: } while (plVar13 != plVar27);
501: local_1d8 = -1;
502: lVar7 = local_1f8 + (long)plVar13;
503: goto LAB_00401f16;
504: }
505: local_1f8 = lVar7;
506: if (DAT_0060a2b4 == 0) goto LAB_004021a6;
507: if (DAT_0060a2b4 == 2) {
508: if (plVar9 == plVar10) {
509: local_1d8 = 1;
510: goto LAB_00401f2c;
511: }
512: }
513: else {
514: if (DAT_0060a2b4 != 3) goto LAB_00401f16;
515: }
516: }
517: LAB_00402091:
518: uVar24 = 1;
519: goto LAB_00401f36;
520: }
521: 
