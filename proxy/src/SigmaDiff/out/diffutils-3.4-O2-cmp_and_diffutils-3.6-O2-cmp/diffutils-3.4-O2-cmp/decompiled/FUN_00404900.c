1: 
2: ulong FUN_00404900(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)
3: 
4: {
5: byte bVar1;
6: byte bVar2;
7: bool bVar3;
8: uint uVar4;
9: int iVar5;
10: int *piVar6;
11: ushort **ppuVar7;
12: byte *pbVar8;
13: ulong uVar9;
14: ulong uVar10;
15: char *pcVar11;
16: uint uVar12;
17: int iVar13;
18: int iVar14;
19: byte bVar15;
20: uint uVar16;
21: long in_FS_OFFSET;
22: byte *local_48;
23: long local_40;
24: 
25: local_40 = *(long *)(in_FS_OFFSET + 0x28);
26: if (0x24 < param_3) {
27: /* WARNING: Subroutine does not return */
28: __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x60,"xstrtoumax");
29: }
30: if (param_2 == (byte **)0x0) {
31: param_2 = &local_48;
32: }
33: piVar6 = __errno_location();
34: *piVar6 = 0;
35: bVar1 = *param_1;
36: ppuVar7 = __ctype_b_loc();
37: pbVar8 = param_1;
38: while ((*(byte *)((long)*ppuVar7 + (ulong)bVar1 * 2 + 1) & 0x20) != 0) {
39: pbVar8 = pbVar8 + 1;
40: bVar1 = *pbVar8;
41: }
42: if (bVar1 != 0x2d) {
43: uVar10 = __strtoul_internal(param_1,param_2,param_3,0);
44: pbVar8 = *param_2;
45: if (param_1 != pbVar8) {
46: if (*piVar6 == 0) {
47: uVar9 = 0;
48: }
49: else {
50: uVar9 = 1;
51: if (*piVar6 != 0x22) goto LAB_0040497e;
52: }
53: uVar12 = (uint)uVar9;
54: if ((param_5 != (char *)0x0) && (bVar1 = *pbVar8, bVar1 != 0)) {
55: pcVar11 = strchr(param_5,(int)(char)bVar1);
56: if (pcVar11 != (char *)0x0) goto LAB_00404a1f;
57: switchD_00404b90_caseD_1:
58: *param_4 = uVar10;
59: uVar9 = (ulong)(uVar12 | 2);
60: goto LAB_00404983;
61: }
62: LAB_004049e8:
63: *param_4 = uVar10;
64: goto LAB_00404983;
65: }
66: if ((param_5 != (char *)0x0) && (bVar1 = *pbVar8, bVar1 != 0)) {
67: uVar12 = 0;
68: pcVar11 = strchr(param_5,(int)(char)bVar1);
69: uVar10 = 1;
70: if (pcVar11 != (char *)0x0) {
71: LAB_00404a1f:
72: uVar16 = bVar1 - 0x45;
73: bVar15 = (byte)uVar16;
74: if (((bVar15 < 0x30) && ((0x814400308945U >> ((ulong)uVar16 & 0x3f) & 1) != 0)) &&
75: (pcVar11 = strchr(param_5,0x30), pcVar11 != (char *)0x0)) {
76: bVar2 = pbVar8[1];
77: if (bVar2 != 0x44) {
78: if (bVar2 == 0x69) {
79: iVar5 = 0x400;
80: iVar13 = (pbVar8[2] == 0x42) + 1 + (uint)(pbVar8[2] == 0x42);
81: goto LAB_00404b7f;
82: }
83: if (bVar2 != 0x42) {
84: /* WARNING: Could not recover jumptable at 0x00404a8a. Too many branches */
85: /* WARNING: Treating indirect jump as call */
86: uVar10 = (*(code *)(&PTR_LAB_00408918)[bVar15])();
87: return uVar10;
88: }
89: }
90: iVar13 = 2;
91: iVar5 = 1000;
92: }
93: else {
94: iVar13 = 1;
95: iVar5 = 0x400;
96: }
97: LAB_00404b7f:
98: switch(bVar1 - 0x42 & 0xff) {
99: case 0:
100: if (uVar10 < 0x40000000000000) {
101: uVar10 = uVar10 << 10;
102: uVar16 = 0;
103: }
104: else {
105: LAB_00404c50:
106: uVar10 = 0xffffffffffffffff;
107: uVar16 = 1;
108: }
109: break;
110: default:
111: goto switchD_00404b90_caseD_1;
112: case 3:
113: iVar14 = 6;
114: uVar16 = 0;
115: do {
116: bVar3 = uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
117: ZEXT816((ulong)(long)iVar5),0);
118: if (bVar3) {
119: uVar10 = uVar10 * (long)iVar5;
120: }
121: else {
122: uVar10 = 0xffffffffffffffff;
123: }
124: uVar16 = uVar16 | !bVar3;
125: iVar14 = iVar14 + -1;
126: } while (iVar14 != 0);
127: break;
128: case 5:
129: case 0x25:
130: iVar14 = 3;
131: uVar16 = 0;
132: do {
133: bVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
134: ZEXT816((ulong)(long)iVar5),0) < uVar10;
135: if (bVar3) {
136: uVar10 = 0xffffffffffffffff;
137: }
138: else {
139: uVar10 = uVar10 * (long)iVar5;
140: }
141: uVar16 = uVar16 | bVar3;
142: iVar14 = iVar14 + -1;
143: } while (iVar14 != 0);
144: break;
145: case 9:
146: case 0x29:
147: if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
148: ZEXT816((ulong)(long)iVar5),0) < uVar10) goto LAB_00404c50;
149: LAB_00404b57:
150: uVar10 = uVar10 * (long)iVar5;
151: uVar16 = 0;
152: break;
153: case 0xb:
154: case 0x2b:
155: uVar9 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
156: ZEXT816((ulong)(long)iVar5),0);
157: if ((uVar10 <= uVar9) && (uVar10 = uVar10 * (long)iVar5, uVar10 <= uVar9))
158: goto LAB_00404b57;
159: uVar16 = 1;
160: uVar10 = 0xffffffffffffffff;
161: break;
162: case 0xe:
163: iVar14 = 5;
164: uVar16 = 0;
165: do {
166: bVar3 = uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
167: ZEXT816((ulong)(long)iVar5),0);
168: if (bVar3) {
169: uVar10 = uVar10 * (long)iVar5;
170: }
171: else {
172: uVar10 = 0xffffffffffffffff;
173: }
174: uVar16 = uVar16 | !bVar3;
175: iVar14 = iVar14 + -1;
176: } while (iVar14 != 0);
177: break;
178: case 0x12:
179: case 0x32:
180: iVar14 = 4;
181: uVar16 = 0;
182: do {
183: bVar3 = uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
184: ZEXT816((ulong)(long)iVar5),0);
185: if (bVar3) {
186: uVar10 = uVar10 * (long)iVar5;
187: }
188: else {
189: uVar10 = 0xffffffffffffffff;
190: }
191: uVar16 = uVar16 | !bVar3;
192: iVar14 = iVar14 + -1;
193: } while (iVar14 != 0);
194: break;
195: case 0x17:
196: iVar14 = 8;
197: uVar16 = 0;
198: do {
199: bVar3 = uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
200: ZEXT816((ulong)(long)iVar5),0);
201: if (bVar3) {
202: uVar10 = uVar10 * (long)iVar5;
203: }
204: else {
205: uVar10 = 0xffffffffffffffff;
206: }
207: uVar16 = uVar16 | !bVar3;
208: iVar14 = iVar14 + -1;
209: } while (iVar14 != 0);
210: break;
211: case 0x18:
212: iVar14 = 7;
213: uVar16 = 0;
214: do {
215: bVar3 = uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) /
216: ZEXT816((ulong)(long)iVar5),0);
217: if (bVar3) {
218: uVar10 = uVar10 * (long)iVar5;
219: }
220: else {
221: uVar10 = 0xffffffffffffffff;
222: }
223: uVar16 = uVar16 | !bVar3;
224: iVar14 = iVar14 + -1;
225: } while (iVar14 != 0);
226: break;
227: case 0x20:
228: if (0x7fffffffffffff < uVar10) goto LAB_00404c50;
229: uVar10 = uVar10 << 9;
230: uVar16 = 0;
231: break;
232: case 0x21:
233: uVar16 = 0;
234: break;
235: case 0x35:
236: if ((long)uVar10 < 0) goto LAB_00404c50;
237: uVar10 = uVar10 * 2;
238: uVar16 = 0;
239: }
240: *param_2 = pbVar8 + iVar13;
241: uVar4 = uVar12 | uVar16;
242: if (pbVar8[iVar13] != 0) {
243: uVar4 = uVar12 | uVar16 | 2;
244: }
245: uVar9 = (ulong)uVar4;
246: goto LAB_004049e8;
247: }
248: }
249: }
250: LAB_0040497e:
251: uVar9 = 4;
252: LAB_00404983:
253: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
254: return uVar9;
255: }
256: /* WARNING: Subroutine does not return */
257: __stack_chk_fail();
258: }
259: 
