1: 
2: byte * FUN_00403c00(undefined8 param_1,int param_2)
3: 
4: {
5: byte bVar1;
6: ushort *puVar2;
7: bool bVar3;
8: byte *pbVar4;
9: int iVar5;
10: byte *__s;
11: size_t sVar6;
12: ushort **ppuVar7;
13: byte *pbVar8;
14: byte *pbVar9;
15: long in_FS_OFFSET;
16: char cVar10;
17: byte *local_90;
18: mbstate_t local_7c;
19: undefined local_74;
20: byte *local_70;
21: byte *local_68;
22: char local_60;
23: wint_t local_5c [7];
24: long local_40;
25: 
26: local_40 = *(long *)(in_FS_OFFSET + 0x28);
27: __s = (byte *)__strdup();
28: if (__s == (byte *)0x0) {
29: /* WARNING: Subroutine does not return */
30: FUN_004049b0();
31: }
32: sVar6 = __ctype_get_mb_cur_max();
33: if (sVar6 < 2) {
34: if (param_2 != 0) {
35: bVar1 = *__s;
36: pbVar9 = __s;
37: if (bVar1 != 0) {
38: ppuVar7 = __ctype_b_loc();
39: do {
40: if ((*(byte *)((long)*ppuVar7 + (ulong)bVar1 * 2 + 1) & 0x20) == 0) break;
41: pbVar9 = pbVar9 + 1;
42: bVar1 = *pbVar9;
43: } while (bVar1 != 0);
44: }
45: sVar6 = strlen((char *)pbVar9);
46: memmove(__s,pbVar9,sVar6 + 1);
47: if (param_2 == 1) goto LAB_00403ed9;
48: }
49: sVar6 = strlen((char *)__s);
50: pbVar9 = __s + (sVar6 - 1);
51: if (__s <= pbVar9) {
52: ppuVar7 = __ctype_b_loc();
53: puVar2 = *ppuVar7;
54: do {
55: if ((*(byte *)((long)puVar2 + (ulong)*pbVar9 * 2 + 1) & 0x20) == 0) break;
56: *pbVar9 = 0;
57: pbVar9 = pbVar9 + -1;
58: } while (__s <= pbVar9);
59: }
60: }
61: else {
62: if (param_2 != 0) {
63: local_70 = __s;
64: sVar6 = strlen((char *)__s);
65: pbVar9 = __s + sVar6;
66: bVar3 = false;
67: local_7c = (mbstate_t)0x0;
68: local_74 = 0;
69: pbVar8 = __s;
70: if (__s < pbVar9) {
71: do {
72: local_74 = 0;
73: if (bVar3) {
74: LAB_00404062:
75: local_68 = (byte *)FUN_00405130(local_5c,pbVar8,pbVar9 + -(long)pbVar8);
76: pbVar8 = local_70;
77: if (local_68 == (byte *)0xffffffffffffffff) {
78: local_68 = (byte *)0x1;
79: }
80: else {
81: if (local_68 != (byte *)0xfffffffffffffffe) {
82: if (local_68 == (byte *)0x0) {
83: local_68 = (byte *)0x1;
84: if (*local_70 != 0) goto LAB_00404152;
85: if (local_5c[0] != 0) goto LAB_00404170;
86: }
87: local_60 = '\x01';
88: iVar5 = mbsinit(&local_7c);
89: if (iVar5 != 0) {
90: bVar3 = false;
91: }
92: goto LAB_00404028;
93: }
94: local_68 = pbVar9 + -(long)local_70;
95: }
96: local_60 = '\0';
97: local_74 = 1;
98: break;
99: }
100: if ((*(uint *)(&DAT_00408f00 + (ulong)(*pbVar8 >> 5) * 4) >> (*pbVar8 & 0x1f) & 1) == 0) {
101: iVar5 = mbsinit(&local_7c);
102: if (iVar5 != 0) {
103: bVar3 = true;
104: goto LAB_00404062;
105: }
106: goto LAB_00404134;
107: }
108: local_68 = (byte *)0x1;
109: local_5c[0] = SEXT14((char)*pbVar8);
110: local_60 = '\x01';
111: pbVar8 = local_70;
112: LAB_00404028:
113: local_74 = 1;
114: iVar5 = iswspace(local_5c[0]);
115: if (iVar5 == 0) break;
116: pbVar8 = pbVar8 + (long)local_68;
117: local_74 = 0;
118: local_70 = pbVar8;
119: } while (pbVar8 < pbVar9);
120: }
121: sVar6 = strlen((char *)pbVar8);
122: memmove(__s,pbVar8,sVar6 + 1);
123: if (param_2 == 1) goto LAB_00403ed9;
124: }
125: cVar10 = '\0';
126: local_70 = __s;
127: sVar6 = strlen((char *)__s);
128: pbVar9 = __s + sVar6;
129: bVar3 = false;
130: local_7c = (mbstate_t)0x0;
131: local_74 = 0;
132: pbVar8 = __s;
133: if (__s < pbVar9) {
134: do {
135: local_74 = 0;
136: if (bVar3) {
137: LAB_00403d75:
138: local_68 = (byte *)FUN_00405130(local_5c,pbVar8,pbVar9 + -(long)pbVar8);
139: pbVar8 = local_70;
140: if (local_68 == (byte *)0xffffffffffffffff) {
141: local_68 = (byte *)0x1;
142: local_60 = '\0';
143: }
144: else {
145: if (local_68 == (byte *)0xfffffffffffffffe) {
146: local_60 = '\0';
147: local_68 = pbVar9 + -(long)local_70;
148: }
149: else {
150: if (local_68 == (byte *)0x0) {
151: local_68 = (byte *)0x1;
152: if (*local_70 != 0) {
153: LAB_00404152:
154: local_68 = (byte *)0x1;
155: /* WARNING: Subroutine does not return */
156: __assert_fail("*iter->cur.ptr == \'\\0\'","mbiter.h",0xa9,"mbiter_multi_next");
157: }
158: if (local_5c[0] != 0) {
159: LAB_00404170:
160: local_68 = (byte *)0x1;
161: /* WARNING: Subroutine does not return */
162: __assert_fail("iter->cur.wc == 0","mbiter.h",0xaa,"mbiter_multi_next");
163: }
164: }
165: local_60 = '\x01';
166: iVar5 = mbsinit(&local_7c);
167: if (iVar5 != 0) {
168: bVar3 = false;
169: }
170: }
171: }
172: }
173: else {
174: if ((*(uint *)(&DAT_00408f00 + (ulong)(*pbVar8 >> 5) * 4) >> (*pbVar8 & 0x1f) & 1) == 0) {
175: iVar5 = mbsinit(&local_7c);
176: if (iVar5 == 0) {
177: LAB_00404134:
178: /* WARNING: Subroutine does not return */
179: __assert_fail("mbsinit (&iter->state)","mbiter.h",0x8e,"mbiter_multi_next");
180: }
181: bVar3 = true;
182: goto LAB_00403d75;
183: }
184: local_68 = (byte *)0x1;
185: local_5c[0] = SEXT14((char)*pbVar8);
186: local_60 = '\x01';
187: pbVar8 = local_70;
188: }
189: pbVar4 = local_68;
190: local_74 = 1;
191: if (cVar10 == '\0') {
192: cVar10 = '\x01';
193: if (local_60 != '\0') {
194: iVar5 = iswspace(local_5c[0]);
195: cVar10 = iVar5 == 0;
196: }
197: }
198: else {
199: if (cVar10 == '\x01') {
200: if ((local_60 != '\0') && (iVar5 = iswspace(local_5c[0]), iVar5 != 0)) {
201: cVar10 = '\x02';
202: local_90 = pbVar8;
203: }
204: }
205: else {
206: if ((cVar10 == '\x02') && (local_60 != '\0')) {
207: iVar5 = iswspace(local_5c[0]);
208: if (iVar5 == 0) {
209: cVar10 = '\x01';
210: }
211: }
212: else {
213: cVar10 = '\x01';
214: }
215: }
216: }
217: pbVar8 = pbVar8 + (long)pbVar4;
218: local_74 = 0;
219: local_70 = pbVar8;
220: } while (pbVar8 < pbVar9);
221: if (cVar10 == '\x02') {
222: *local_90 = 0;
223: }
224: }
225: }
226: LAB_00403ed9:
227: if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
228: return __s;
229: }
230: /* WARNING: Subroutine does not return */
231: __stack_chk_fail();
232: }
233: 
