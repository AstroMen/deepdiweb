1: 
2: /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
3: 
4: undefined8 FUN_004018a0(int param_1,undefined8 *param_2)
5: 
6: {
7: byte *pbVar1;
8: undefined *puVar2;
9: byte bVar3;
10: byte bVar4;
11: undefined uVar5;
12: undefined uVar6;
13: FILE *__stream;
14: long *plVar7;
15: char cVar8;
16: int iVar9;
17: long lVar10;
18: long lVar11;
19: long lVar12;
20: long *plVar13;
21: long *plVar14;
22: long *plVar15;
23: long *plVar16;
24: long lVar17;
25: int *piVar18;
26: undefined *puVar19;
27: char *pcVar20;
28: undefined8 uVar21;
29: undefined8 uVar22;
30: undefined8 uVar23;
31: undefined **ppuVar24;
32: long *extraout_RDX;
33: uint uVar25;
34: int iVar26;
35: ulong uVar27;
36: long *plVar28;
37: long in_FS_OFFSET;
38: undefined auVar29 [16];
39: long *local_218;
40: long *local_210;
41: long *local_208;
42: long *local_200;
43: long local_1f8;
44: long local_1f0;
45: int local_1e8;
46: uint local_1e4;
47: undefined8 local_1e0;
48: long *local_1d8;
49: long *local_1d0;
50: long *local_1c0;
51: stat local_1b8;
52: stat local_128;
53: undefined local_98 [16];
54: undefined local_88 [16];
55: long local_78 [4];
56: undefined local_58 [24];
57: long local_40;
58: 
59: local_40 = *(long *)(in_FS_OFFSET + 0x28);
60: DAT_0060a238 = 2;
61: FUN_00402d00(*param_2);
62: setlocale(6,"");
63: bindtextdomain("diffutils","/home/ericlee/projects/input3/binaries/share/locale");
64: textdomain("diffutils");
65: FUN_00402b20(0);
66: while( true ) {
67: ppuVar24 = &PTR_s_print-bytes_004082e0;
68: iVar9 = getopt_long(param_1,param_2,"bci:ln:sv",&PTR_s_print-bytes_004082e0,0);
69: uVar21 = DAT_0060c458;
70: if (iVar9 == -1) break;
71: switch(iVar9) {
72: case 0x62:
73: case 99:
74: DAT_0060a2b2 = '\x01';
75: break;
76: default:
77: FUN_00402820(0,0);
78: goto LAB_00401bb9;
79: case 0x69:
80: FUN_00402880(0,&optarg,0x3a);
81: pcVar20 = optarg + 1;
82: if (*optarg == ':') {
83: optarg = pcVar20;
84: FUN_00402880(1,&optarg,0);
85: }
86: else {
87: optarg = pcVar20;
88: if (DAT_0060a2c8 < DAT_0060a2c0) {
89: DAT_0060a2c8 = DAT_0060a2c0;
90: }
91: }
92: break;
93: case 0x6c:
94: if (1 < DAT_0060a2b4) goto LAB_00402711;
95: DAT_0060a2b4 = 1;
96: break;
97: case 0x6e:
98: iVar9 = FUN_00404900(optarg,0,0,&local_1c0);
99: if (iVar9 != 0) goto LAB_00402700;
100: if (local_1c0 < DAT_0060a228) {
101: DAT_0060a228 = local_1c0;
102: }
103: break;
104: case 0x73:
105: if ((DAT_0060a2b4 != 0) && (DAT_0060a2b4 != 3)) goto LAB_00402711;
106: DAT_0060a2b4 = 3;
107: break;
108: case 0x76:
109: uVar21 = FUN_00403720("David MacKenzie");
110: uVar23 = FUN_004037b0("Torbjorn Granlund",&DAT_00408032);
111: FUN_00404510(stdout,&DAT_00408065,"GNU diffutils",PTR_DAT_0060a230,uVar23,uVar21,0,ppuVar24);
112: FUN_00402a10();
113: goto LAB_00401aae;
114: case 0x80:
115: uVar23 = dcgettext(0,"Usage: %s [OPTION]... FILE1 [FILE2 [SKIP1 [SKIP2]]]\n",5);
116: __printf_chk(1,uVar23,uVar21);
117: pcVar20 = (char *)dcgettext(0,"Compare two files byte by byte.",5);
118: puts(pcVar20);
119: uVar21 = dcgettext(0,
120: "The optional SKIP1 and SKIP2 specify the number of bytes to skip\nat the beginning of each file (zero by default)."
121: ,5);
122: __printf_chk(1,&DAT_00408069,uVar21);
123: __stream = stdout;
124: pcVar20 = (char *)dcgettext(0,
125: "Mandatory arguments to long options are mandatory for short options too.\n"
126: ,5);
127: ppuVar24 = &PTR_s_-b,_--print-bytes_print_differin_00408280;
128: fputs_unlocked(pcVar20,__stream);
129: pcVar20 = "-b, --print-bytes          print differing bytes";
130: do {
131: ppuVar24 = ppuVar24 + 1;
132: uVar21 = dcgettext(0,pcVar20,5);
133: __printf_chk(1,"  %s\n",uVar21);
134: pcVar20 = *ppuVar24;
135: } while (pcVar20 != (char *)0x0);
136: uVar21 = dcgettext(0,"Exit status is 0 if inputs are the same, 1 if different, 2 if trouble.",
137: 5);
138: uVar23 = dcgettext(0,"If a FILE is \'-\' or missing, read standard input.",5);
139: uVar22 = dcgettext(0,
140: "SKIP values may be followed by the following multiplicative suffixes:\nkB 1000, K 1024, MB 1,000,000, M 1,048,576,\nGB 1,000,000,000, G 1,073,741,824, and so on for T, P, E, Z, Y."
141: ,5);
142: __printf_chk(1,"\n%s\n\n%s\n%s\n",uVar22,uVar23,uVar21);
143: FUN_004045c0();
144: FUN_00402a10();
145: goto LAB_00401aae;
146: }
147: }
148: LAB_00401bb9:
149: if (param_1 == optind) {
150: FUN_00402820("missing operand after \'%s\'",param_2[(long)param_1 + -1]);
151: LAB_00402700:
152: FUN_00402820("invalid --bytes value \'%s\'",optarg);
153: LAB_00402711:
154: auVar29 = FUN_00402820("options -l and -s are incompatible",0);
155: plVar13 = local_218;
156: local_218 = SUB168(auVar29,0);
157: __libc_start_main(FUN_004018a0,plVar13,&local_210,FUN_004079e0,FUN_00407a50,
158: SUB168(auVar29 >> 0x40,0),&local_218);
159: do {
160: /* WARNING: Do nothing block with infinite loop */
161: } while( true );
162: }
163: DAT_0060a430 = (long *)param_2[optind];
164: DAT_0060a438 = (long *)&DAT_00408492;
165: iVar9 = optind + 1;
166: if (optind + 1 < param_1) {
167: DAT_0060a438 = (long *)param_2[(long)optind + 1];
168: iVar9 = optind + 2;
169: }
170: optind = iVar9;
171: iVar9 = 0;
172: do {
173: lVar10 = (long)optind;
174: if (param_1 <= optind) goto LAB_00401c4c;
175: optind = optind + 1;
176: local_1c0 = (long *)param_2[lVar10];
177: iVar26 = iVar9 + 1;
178: FUN_00402880(iVar9,&local_1c0,0);
179: iVar9 = iVar26;
180: } while (iVar26 != 2);
181: if (optind < param_1) {
182: FUN_00402820("extra operand \'%s\'",param_2[optind]);
183: }
184: LAB_00401c4c:
185: uVar25 = 0;
186: do {
187: iVar9 = 0x2d - (uint)*(byte *)DAT_0060a438;
188: if (iVar9 == 0) {
189: iVar9 = -(uint)*(byte *)((long)DAT_0060a438 + 1);
190: }
191: if (((uVar25 != 0) && (DAT_0060a2c0 == DAT_0060a2c8)) &&
192: (iVar26 = strcmp((char *)DAT_0060a430,(char *)DAT_0060a438), iVar26 == 0)) goto LAB_00401aae;
193: lVar10 = (long)(int)(iVar9 == 0 ^ uVar25);
194: pcVar20 = (char *)(&DAT_0060a430)[lVar10];
195: if ((*pcVar20 == '-') && (pcVar20[1] == '\0')) {
196: (&DAT_0060a420)[lVar10] = 0;
197: iVar9 = 0;
198: LAB_00401ce0:
199: iVar9 = __fxstat(1,iVar9,(stat *)(&DAT_0060a300 + lVar10 * 0x90));
200: if (iVar9 != 0) goto LAB_00401fc5;
201: }
202: else {
203: iVar9 = open(pcVar20,0,0);
204: (&DAT_0060a420)[lVar10] = iVar9;
205: if (-1 < iVar9) goto LAB_00401ce0;
206: if (DAT_0060a2b4 == 3) {
207: /* WARNING: Subroutine does not return */
208: exit(2);
209: }
210: LAB_00401fc5:
211: piVar18 = __errno_location();
212: error(2,*piVar18,&DAT_00407ff4);
213: }
214: uVar25 = uVar25 + 1;
215: } while (uVar25 != 2);
216: if ((_DAT_0060a308 == DAT_0060a398) && (_DAT_0060a300 == DAT_0060a390)) {
217: LAB_00402017:
218: if (((((DAT_0060a318 == DAT_0060a3a8) && (_DAT_0060a310 == DAT_0060a3a0)) &&
219: (_DAT_0060a31c == DAT_0060a3ac)) &&
220: ((_DAT_0060a320 == DAT_0060a3b0 && (DAT_0060a330 == DAT_0060a3c0)))) &&
221: ((_DAT_0060a358 == DAT_0060a3e8 && (_DAT_0060a368 == DAT_0060a3f8)))) {
222: lVar10 = FUN_00402920(0);
223: lVar17 = FUN_00402920(1);
224: if (lVar10 == lVar17) {
225: LAB_00401aae:
226: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
227: return 0;
228: }
229: /* WARNING: Subroutine does not return */
230: __stack_chk_fail();
231: }
232: }
233: LAB_00401d46:
234: if (DAT_0060a2b4 != 3) goto LAB_0040220b;
235: }
236: else {
237: if ((DAT_0060a318 & 0xf000) != 0x6000) {
238: if ((DAT_0060a318 & 0xf000) == 0x2000) {
239: if ((DAT_0060a3a8 & 0xf000) == 0x2000) goto LAB_00402461;
240: goto LAB_004021fe;
241: }
242: goto LAB_00401d46;
243: }
244: if ((DAT_0060a3a8 & 0xf000) == 0x6000) {
245: LAB_00402461:
246: if (_DAT_0060a328 == DAT_0060a3b8) goto LAB_00402017;
247: goto LAB_00401d46;
248: }
249: LAB_004021fe:
250: if (DAT_0060a2b4 == 3) goto LAB_00401dc2;
251: LAB_0040220b:
252: iVar9 = __fxstat(1,1,&local_1b8);
253: if ((iVar9 != 0) || (iVar9 = __xstat(1,"/dev/null",&local_128), iVar9 != 0)) goto LAB_00402227;
254: if ((local_1b8.st_ino == local_128.st_ino) && (local_1b8.st_dev == local_128.st_dev)) {
255: LAB_0040255a:
256: DAT_0060a2b4 = 2;
257: }
258: else {
259: if ((local_1b8.st_mode & 0xf000) == 0x6000) {
260: if ((local_128.st_mode & 0xf000) == 0x6000) goto LAB_00402544;
261: }
262: else {
263: if (((local_1b8.st_mode & 0xf000) == 0x2000) && ((local_128.st_mode & 0xf000) == 0x2000)) {
264: LAB_00402544:
265: if (local_1b8.st_rdev == local_128.st_rdev) goto LAB_0040255a;
266: }
267: }
268: }
269: LAB_00402227:
270: if (DAT_0060a2b4 != 3) goto LAB_00401dc2;
271: }
272: lVar10 = DAT_0060a330;
273: if (((DAT_0060a318 & 0xf000) == 0x8000) && ((DAT_0060a3a8 & 0xf000) == 0x8000)) {
274: lVar11 = FUN_00402920(0);
275: lVar17 = DAT_0060a3c0;
276: lVar12 = FUN_00402920(1);
277: plVar13 = (long *)(lVar10 - lVar11);
278: if ((long)(long *)(lVar10 - lVar11) < 0) {
279: plVar13 = (long *)0x0;
280: }
281: plVar28 = (long *)0x0;
282: if (-1 < (long)(long *)(lVar17 - lVar12)) {
283: plVar28 = (long *)(lVar17 - lVar12);
284: }
285: if (plVar13 != plVar28) {
286: if ((long)plVar28 < (long)plVar13) {
287: plVar13 = plVar28;
288: }
289: if (plVar13 < DAT_0060a228) {
290: /* WARNING: Subroutine does not return */
291: exit(1);
292: }
293: }
294: }
295: LAB_00401dc2:
296: DAT_0060a2d0 = (long *)FUN_00404f40(DAT_0060a338,DAT_0060a3c8,0x7ffffffffffffff7);
297: pbVar1 = (byte *)((long)DAT_0060a2d0 + 0xf);
298: plVar13 = (long *)FUN_00404640(((ulong)pbVar1 >> 3) << 4);
299: lVar10 = DAT_0060a330;
300: _DAT_0060a2e8 = (long *)((long)plVar13 + ((ulong)pbVar1 & 0xfffffffffffffff8));
301: local_200 = DAT_0060a228;
302: _DAT_0060a2e0 = plVar13;
303: local_210 = _DAT_0060a2e8;
304: if (DAT_0060a2b4 == 1) {
305: plVar28 = (long *)0x7fffffffffffffff;
306: if (-1 < (long)DAT_0060a228) {
307: plVar28 = DAT_0060a228;
308: }
309: if ((DAT_0060a318 & 0xf000) == 0x8000) {
310: lVar17 = FUN_00402920(0);
311: if ((long)(long *)(lVar10 - lVar17) < (long)plVar28) {
312: plVar28 = (long *)(lVar10 - lVar17);
313: }
314: }
315: lVar10 = DAT_0060a3c0;
316: if ((DAT_0060a3a8 & 0xf000) == 0x8000) {
317: lVar17 = FUN_00402920(1);
318: if ((long)(long *)(lVar10 - lVar17) < (long)plVar28) {
319: plVar28 = (long *)(lVar10 - lVar17);
320: }
321: }
322: local_1e8 = 1;
323: while (plVar28 = (long *)((long)plVar28 / 10), plVar28 != (long *)0x0) {
324: local_1e8 = local_1e8 + 1;
325: }
326: }
327: uVar27 = 0;
328: do {
329: plVar28 = (long *)(&DAT_0060a2c0)[uVar27];
330: if ((plVar28 != (long *)0x0) && (lVar10 = FUN_00402920(uVar27 & 0xffffffff), lVar10 == -1)) {
331: do {
332: plVar15 = plVar28;
333: if (DAT_0060a2d0 <= plVar28) {
334: plVar15 = DAT_0060a2d0;
335: }
336: plVar14 = (long *)FUN_00404ea0((&DAT_0060a420)[uVar27],plVar13,plVar15);
337: if (plVar15 != plVar14) {
338: if (plVar14 == (long *)0xffffffffffffffff) {
339: piVar18 = __errno_location();
340: error(2,*piVar18,&DAT_00407ff4,(&DAT_0060a430)[uVar27]);
341: }
342: break;
343: }
344: plVar28 = (long *)((long)plVar28 - (long)plVar15);
345: } while (plVar28 != (long *)0x0);
346: }
347: uVar27 = uVar27 + 1;
348: } while (uVar27 != 2);
349: local_1e4 = 0;
350: local_1f8 = 1;
351: lVar10 = 1;
352: do {
353: plVar28 = DAT_0060a2d0;
354: if (local_200 != (long *)0xffffffffffffffff) {
355: if (local_200 < DAT_0060a2d0) {
356: plVar28 = local_200;
357: }
358: local_200 = (long *)((long)local_200 - (long)plVar28);
359: }
360: plVar14 = (long *)FUN_00404ea0(DAT_0060a420,plVar13,plVar28);
361: plVar15 = DAT_0060a430;
362: if (plVar14 == (long *)0xffffffffffffffff) {
363: piVar18 = __errno_location();
364: error(2,*piVar18,&DAT_00407ff4,plVar15);
365: }
366: plVar15 = (long *)FUN_00404ea0(DAT_0060a424,local_210,plVar28);
367: plVar28 = DAT_0060a438;
368: if (plVar15 == (long *)0xffffffffffffffff) {
369: piVar18 = __errno_location();
370: error(2,*piVar18,&DAT_00407ff4,plVar28);
371: }
372: plVar28 = local_210;
373: local_218 = plVar15;
374: if (plVar14 <= plVar15) {
375: local_218 = plVar14;
376: }
377: iVar9 = memcmp(plVar13,local_210,(size_t)local_218);
378: plVar7 = local_210;
379: if (iVar9 != 0) {
380: *(byte *)((long)plVar13 + (long)plVar14) = ~*(byte *)((long)plVar28 + (long)plVar14);
381: *(byte *)((long)plVar28 + (long)plVar15) = ~*(byte *)((long)plVar13 + (long)plVar15);
382: plVar16 = plVar13;
383: while (*plVar16 == *plVar28) {
384: plVar16 = plVar16 + 1;
385: plVar28 = plVar28 + 1;
386: }
387: while (*(byte *)plVar16 == *(byte *)plVar28) {
388: plVar16 = (long *)((long)plVar16 + 1);
389: plVar28 = (long *)((long)plVar28 + 1);
390: }
391: plVar16 = (long *)((long)plVar16 - (long)plVar13);
392: lVar17 = (long)plVar16 + lVar10;
393: local_208 = plVar16;
394: local_1f0 = lVar17;
395: if (DAT_0060a2b4 == 0) goto LAB_004020d3;
396: if (local_218 <= plVar16) goto LAB_00401f6d;
397: if (DAT_0060a2b4 == 2) {
398: if (plVar14 == plVar15) {
399: local_1e4 = 1;
400: break;
401: }
402: }
403: else {
404: if (DAT_0060a2b4 != 3) {
405: plVar28 = plVar16;
406: if (DAT_0060a2b4 == 1) {
407: do {
408: local_1d0 = plVar15;
409: local_1d8 = plVar14;
410: bVar3 = *(byte *)((long)plVar13 + (long)plVar28);
411: bVar4 = *(byte *)((long)plVar7 + (long)plVar28);
412: if (bVar3 != bVar4) {
413: uVar21 = FUN_00402c50(lVar10 + (long)plVar28,local_58,plVar16);
414: if (DAT_0060a2b2 == '\0') {
415: __printf_chk(1,"%*s %3o %3o\n",local_1e8,uVar21,bVar3);
416: plVar16 = extraout_RDX;
417: }
418: else {
419: local_1e0 = uVar21;
420: FUN_00402970(local_88,bVar3);
421: local_1e4 = (uint)bVar4;
422: FUN_00402970(local_78,bVar4);
423: plVar16 = local_78;
424: __printf_chk(1,"%*s %3o %-4s %3o %s\n",local_1e8,local_1e0,bVar3,local_88,
425: local_1e4);
426: }
427: }
428: plVar28 = (long *)((long)plVar28 + 1);
429: plVar14 = local_1d8;
430: plVar15 = local_1d0;
431: } while (plVar28 < local_218);
432: lVar17 = (long)local_218 + (local_1f0 - (long)local_208);
433: local_1e4 = 0xffffffff;
434: }
435: goto LAB_00401f6d;
436: }
437: }
438: LAB_00402193:
439: uVar25 = 1;
440: goto LAB_00401f8e;
441: }
442: lVar17 = lVar10 + (long)local_218;
443: if (DAT_0060a2b4 != 0) goto LAB_00401f6d;
444: local_208 = local_218;
445: LAB_004020d3:
446: lVar10 = 0;
447: puVar2 = (undefined *)((long)plVar13 + (long)local_208);
448: *puVar2 = 10;
449: plVar28 = plVar13;
450: while (puVar19 = (undefined *)rawmemchr(plVar28,10), puVar2 != puVar19) {
451: plVar28 = (long *)(puVar19 + 1);
452: lVar10 = lVar10 + 1;
453: }
454: local_1f8 = local_1f8 + lVar10;
455: if (local_208 < local_218) {
456: uVar21 = FUN_00402c50(lVar17,local_78);
457: uVar23 = FUN_00402c50(local_1f8,local_58);
458: if (DAT_0060a2b2 == '\0') {
459: pcVar20 = (char *)dcgettext(0,"%s %s differ: byte %s, line %s\n",5);
460: if ((pcVar20 == "%s %s differ: byte %s, line %s\n") &&
461: (cVar8 = FUN_00402c00(5), cVar8 == '\0')) {
462: pcVar20 = "%s %s differ: char %s, line %s\n";
463: }
464: __printf_chk(1,pcVar20,DAT_0060a430,DAT_0060a438,uVar21,uVar23);
465: }
466: else {
467: uVar5 = *(undefined *)((long)plVar13 + (long)local_208);
468: uVar6 = *(undefined *)((long)local_210 + (long)local_208);
469: FUN_00402970(local_98,uVar5);
470: FUN_00402970(local_88,uVar6);
471: local_210 = DAT_0060a438;
472: local_218 = DAT_0060a430;
473: uVar22 = dcgettext(0,"%s %s differ: byte %s, line %s is %3o %s %3o %s\n",5);
474: __printf_chk(1,uVar22,local_218,local_210,uVar21,uVar23,uVar5,local_98,uVar6,local_88);
475: }
476: goto LAB_00402193;
477: }
478: LAB_00401f6d:
479: if (plVar14 != plVar15) {
480: if (DAT_0060a2b4 == 3) goto LAB_00402193;
481: uVar21 = (&DAT_0060a430)[plVar15 < plVar14];
482: uVar25 = 1;
483: uVar23 = dcgettext(0,"cmp: EOF on %s\n",5);
484: __fprintf_chk(stderr,1,uVar23,uVar21);
485: goto LAB_00401f8e;
486: }
487: lVar10 = lVar17;
488: } while (plVar14 == DAT_0060a2d0);
489: uVar25 = (uint)(local_1e4 != 0);
490: LAB_00401f8e:
491: lVar10 = 0;
492: do {
493: iVar9 = close(*(int *)((long)&DAT_0060a420 + lVar10));
494: if (iVar9 != 0) {
495: piVar18 = __errno_location();
496: error(2,*piVar18,&DAT_00407ff4,*(undefined8 *)((long)&DAT_0060a430 + lVar10 * 2));
497: }
498: lVar10 = lVar10 + 4;
499: } while (lVar10 != 8);
500: if ((uVar25 != 0) && (DAT_0060a2b4 < 2)) {
501: FUN_00402a10();
502: }
503: /* WARNING: Subroutine does not return */
504: exit(uVar25);
505: }
506: 
