1: 
2: undefined8 FUN_00402ec0(byte *param_1,undefined8 param_2)
3: 
4: {
5: byte bVar1;
6: ushort uVar2;
7: bool bVar3;
8: byte *pbVar4;
9: int iVar5;
10: byte *__s;
11: byte *pbVar6;
12: size_t sVar7;
13: ushort **ppuVar8;
14: undefined8 uVar9;
15: byte bVar10;
16: char cVar11;
17: char cVar12;
18: wint_t wVar13;
19: long in_FS_OFFSET;
20: bool bVar14;
21: mbstate_t local_c4;
22: char local_bc;
23: byte *local_b8;
24: size_t local_b0;
25: char local_a8;
26: wint_t local_a4 [7];
27: char local_88;
28: mbstate_t local_84;
29: undefined local_7c;
30: byte *local_78;
31: size_t local_70;
32: undefined local_68;
33: int local_64 [9];
34: long local_40;
35: 
36: local_40 = *(long *)(in_FS_OFFSET + 0x28);
37: __s = (byte *)FUN_00403c00(param_2,2);
38: LAB_00402f10:
39: if (*param_1 != 0) {
40: while( true ) {
41: pbVar6 = (byte *)FUN_004062c0(param_1,__s);
42: if (pbVar6 == (byte *)0x0) goto LAB_00403160;
43: sVar7 = __ctype_get_mb_cur_max();
44: if (1 < sVar7) break;
45: if (param_1 < pbVar6) {
46: ppuVar8 = __ctype_b_loc();
47: uVar2 = (*ppuVar8)[pbVar6[-1]];
48: sVar7 = strlen((char *)__s);
49: bVar1 = pbVar6[sVar7];
50: bVar10 = ((byte)(uVar2 >> 3) ^ 1) & 1;
51: if (bVar1 != 0) goto LAB_004036aa;
52: LAB_00403143:
53: if (bVar10 != 0) goto LAB_004037f2;
54: }
55: else {
56: sVar7 = strlen((char *)__s);
57: bVar1 = pbVar6[sVar7];
58: if (bVar1 == 0) goto LAB_004037f2;
59: bVar10 = 1;
60: LAB_004036aa:
61: ppuVar8 = __ctype_b_loc();
62: if ((*(byte *)(*ppuVar8 + bVar1) & 8) == 0) goto LAB_00403143;
63: }
64: if ((*pbVar6 == 0) || (param_1 = pbVar6 + 1, *param_1 == 0)) goto LAB_00403160;
65: }
66: bVar14 = false;
67: local_c4 = (mbstate_t)0x0;
68: local_b8 = param_1;
69: if (param_1 < pbVar6) {
70: do {
71: local_bc = '\0';
72: if (bVar14) {
73: LAB_00402fe7:
74: sVar7 = __ctype_get_mb_cur_max();
75: pbVar4 = local_b8;
76: uVar9 = FUN_00403bc0(local_b8,sVar7);
77: local_b0 = FUN_00405130(local_a4,pbVar4,uVar9,&local_c4);
78: wVar13 = local_a4[0];
79: pbVar4 = local_b8;
80: if (local_b0 == 0xffffffffffffffff) {
81: local_b0 = 1;
82: local_a8 = '\0';
83: local_b8 = pbVar4;
84: }
85: else {
86: if (local_b0 != 0xfffffffffffffffe) {
87: if (local_b0 == 0) {
88: local_b0 = 1;
89: if (*local_b8 != 0) {
90: LAB_00403815:
91: /* WARNING: Subroutine does not return */
92: __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
93: }
94: if (local_a4[0] != 0) {
95: LAB_00403781:
96: /* WARNING: Subroutine does not return */
97: __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
98: }
99: local_a8 = '\x01';
100: iVar5 = mbsinit(&local_c4);
101: if (iVar5 == 0) {
102: local_bc = '\x01';
103: LAB_00403070:
104: /* WARNING: Subroutine does not return */
105: abort();
106: }
107: }
108: else {
109: local_a8 = '\x01';
110: iVar5 = mbsinit(&local_c4);
111: if (iVar5 == 0) goto LAB_00402fad;
112: }
113: bVar14 = false;
114: goto LAB_00402fad;
115: }
116: local_b0 = strlen((char *)local_b8);
117: local_a8 = '\0';
118: local_b8 = pbVar4;
119: wVar13 = local_a4[0];
120: }
121: }
122: else {
123: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1) ==
124: 0) {
125: iVar5 = mbsinit(&local_c4);
126: if (iVar5 != 0) {
127: bVar14 = true;
128: goto LAB_00402fe7;
129: }
130: goto LAB_004037fc;
131: }
132: local_b0 = 1;
133: wVar13 = SEXT14((char)*local_b8);
134: local_a8 = '\x01';
135: local_a4[0] = wVar13;
136: LAB_00402fad:
137: local_bc = '\x01';
138: if (wVar13 == 0) goto LAB_00403070;
139: }
140: local_b8 = local_b8 + local_b0;
141: local_bc = 0;
142: } while (local_b8 < pbVar6);
143: if (local_a8 != '\0') {
144: iVar5 = iswalnum(wVar13);
145: bVar14 = iVar5 == 0;
146: goto LAB_004031b7;
147: }
148: }
149: bVar14 = true;
150: LAB_004031b7:
151: local_88 = '\0';
152: bVar3 = false;
153: local_c4 = (mbstate_t)0x0;
154: local_84 = (mbstate_t)0x0;
155: local_b8 = pbVar6;
156: local_78 = __s;
157: while( true ) {
158: local_7c = 0;
159: local_bc = '\0';
160: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_78 >> 5) * 4) >> (*local_78 & 0x1f) & 1) != 0) {
161: local_70 = 1;
162: local_64[0] = (int)(char)*local_78;
163: local_68 = 1;
164: goto LAB_00403246;
165: }
166: iVar5 = mbsinit(&local_84);
167: if (iVar5 == 0) break;
168: local_88 = '\x01';
169: do {
170: sVar7 = __ctype_get_mb_cur_max();
171: pbVar4 = local_78;
172: uVar9 = FUN_00403bc0(local_78,sVar7);
173: local_70 = FUN_00405130(local_64,pbVar4,uVar9,&local_84);
174: if (local_70 == 0xffffffffffffffff) {
175: local_70 = 1;
176: LAB_00403369:
177: local_68 = 0;
178: }
179: else {
180: if (local_70 == 0xfffffffffffffffe) {
181: local_70 = strlen((char *)local_78);
182: goto LAB_00403369;
183: }
184: if (local_70 == 0) {
185: local_70 = 1;
186: if (*local_78 != 0) goto LAB_00403815;
187: if (local_64[0] != 0) goto LAB_00403781;
188: }
189: local_68 = 1;
190: iVar5 = mbsinit(&local_84);
191: if (iVar5 != 0) {
192: local_88 = '\0';
193: }
194: LAB_00403246:
195: cVar11 = local_bc;
196: local_7c = 1;
197: if (local_64[0] == 0) {
198: cVar12 = local_a8;
199: wVar13 = local_a4[0];
200: if (local_bc == '\0') {
201: if (bVar3) {
202: LAB_004036d9:
203: sVar7 = __ctype_get_mb_cur_max();
204: pbVar4 = local_b8;
205: uVar9 = FUN_00403bc0(local_b8,sVar7);
206: local_b0 = FUN_00405130(local_a4,pbVar4,uVar9,&local_c4);
207: wVar13 = local_a4[0];
208: if (local_b0 == 0xffffffffffffffff) {
209: local_b0 = 1;
210: local_a8 = '\0';
211: }
212: else {
213: if (local_b0 == 0xfffffffffffffffe) {
214: local_b0 = strlen((char *)local_b8);
215: local_a8 = '\0';
216: wVar13 = local_a4[0];
217: }
218: else {
219: if (local_b0 == 0) {
220: local_b0 = 1;
221: if (*local_b8 != 0) goto LAB_00403815;
222: if (local_a4[0] != 0) goto LAB_00403781;
223: }
224: local_a8 = '\x01';
225: cVar11 = '\x01';
226: mbsinit(&local_c4);
227: }
228: }
229: }
230: else {
231: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) &
232: 1) == 0) {
233: iVar5 = mbsinit(&local_c4);
234: if (iVar5 != 0) goto LAB_004036d9;
235: goto LAB_004037fc;
236: }
237: local_b0 = 1;
238: local_a4[0] = SEXT14((char)*local_b8);
239: cVar11 = '\x01';
240: local_a8 = '\x01';
241: wVar13 = local_a4[0];
242: }
243: local_bc = '\x01';
244: cVar12 = cVar11;
245: }
246: if (((((cVar12 != '\0') && (wVar13 == 0)) || (local_a8 == '\0')) ||
247: (iVar5 = iswalnum(wVar13), iVar5 == 0)) && (bVar14)) goto LAB_004037f2;
248: local_c4 = (mbstate_t)0x0;
249: local_bc = '\0';
250: if ((*(uint *)(&DAT_00408f00 + (ulong)(*pbVar6 >> 5) * 4) >> (*pbVar6 & 0x1f) & 1) == 0)
251: {
252: local_b8 = pbVar6;
253: iVar5 = mbsinit(&local_c4);
254: if (iVar5 == 0) goto LAB_004037fc;
255: sVar7 = __ctype_get_mb_cur_max();
256: pbVar4 = local_b8;
257: uVar9 = FUN_00403bc0(local_b8,sVar7);
258: local_b0 = FUN_00405130(local_a4,pbVar4,uVar9);
259: if (local_b0 == 0xffffffffffffffff) {
260: local_b0 = 1;
261: param_1 = pbVar6 + 1;
262: goto LAB_00402f10;
263: }
264: if (local_b0 == 0xfffffffffffffffe) {
265: local_b0 = strlen((char *)local_b8);
266: param_1 = pbVar6 + local_b0;
267: goto LAB_00402f10;
268: }
269: if (local_b0 == 0) {
270: local_b0 = 1;
271: if (*local_b8 != 0) goto LAB_00403815;
272: if (local_a4[0] != 0) goto LAB_00403781;
273: }
274: local_a8 = '\x01';
275: mbsinit(&local_c4);
276: }
277: else {
278: local_b0 = 1;
279: local_a4[0] = SEXT14((char)*pbVar6);
280: local_a8 = '\x01';
281: local_b8 = pbVar6;
282: }
283: local_bc = '\x01';
284: if (local_a4[0] == 0) goto LAB_00403160;
285: param_1 = pbVar6 + local_b0;
286: goto LAB_00402f10;
287: }
288: }
289: cVar12 = local_bc;
290: local_7c = 1;
291: cVar11 = local_a8;
292: if (local_bc == '\0') {
293: if (bVar3) {
294: LAB_004034c5:
295: sVar7 = __ctype_get_mb_cur_max();
296: pbVar4 = local_b8;
297: uVar9 = FUN_00403bc0(local_b8,sVar7);
298: local_b0 = FUN_00405130(local_a4,pbVar4,uVar9,&local_c4);
299: if (local_b0 == 0xffffffffffffffff) {
300: local_b0 = 1;
301: local_a8 = '\0';
302: }
303: else {
304: if (local_b0 == 0xfffffffffffffffe) {
305: local_b0 = strlen((char *)local_b8);
306: local_a8 = '\0';
307: }
308: else {
309: if (local_b0 == 0) {
310: local_b0 = 1;
311: if (*local_b8 != 0) goto LAB_00403815;
312: if (local_a4[0] != 0) goto LAB_00403781;
313: }
314: local_a8 = '\x01';
315: cVar12 = '\x01';
316: iVar5 = mbsinit(&local_c4);
317: if (iVar5 != 0) {
318: bVar3 = false;
319: }
320: }
321: }
322: }
323: else {
324: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1)
325: == 0) {
326: iVar5 = mbsinit(&local_c4);
327: if (iVar5 != 0) {
328: bVar3 = true;
329: goto LAB_004034c5;
330: }
331: goto LAB_004037fc;
332: }
333: local_b0 = 1;
334: local_a4[0] = SEXT14((char)*local_b8);
335: cVar12 = '\x01';
336: local_a8 = '\x01';
337: }
338: local_bc = '\x01';
339: cVar11 = cVar12;
340: }
341: if ((cVar11 != '\0') && (local_a4[0] == 0)) goto LAB_00403070;
342: local_b8 = local_b8 + local_b0;
343: local_78 = local_78 + local_70;
344: local_bc = '\0';
345: local_7c = 0;
346: } while (local_88 != '\0');
347: }
348: LAB_004037fc:
349: /* WARNING: Subroutine does not return */
350: __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
351: }
352: LAB_00403160:
353: uVar9 = 0;
354: LAB_00403162:
355: free(__s);
356: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
357: return uVar9;
358: }
359: /* WARNING: Subroutine does not return */
360: __stack_chk_fail();
361: LAB_004037f2:
362: uVar9 = 1;
363: goto LAB_00403162;
364: }
365: 
