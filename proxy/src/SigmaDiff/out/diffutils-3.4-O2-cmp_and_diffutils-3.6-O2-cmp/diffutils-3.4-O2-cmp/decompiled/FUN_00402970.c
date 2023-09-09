1: 
2: void FUN_00402970(byte *param_1,byte param_2)
3: 
4: {
5: ushort **ppuVar1;
6: 
7: ppuVar1 = __ctype_b_loc();
8: if ((*(byte *)((long)*ppuVar1 + (ulong)param_2 * 2 + 1) & 0x40) == 0) {
9: if ((char)param_2 < '\0') {
10: param_2 = param_2 + 0x80;
11: *param_1 = 0x4d;
12: param_1[1] = 0x2d;
13: param_1 = param_1 + 2;
14: if (param_2 < 0x20) goto LAB_004029b0;
15: }
16: else {
17: if (param_2 < 0x20) {
18: LAB_004029b0:
19: *param_1 = 0x5e;
20: param_1[2] = 0;
21: param_1[1] = param_2 + 0x40;
22: return;
23: }
24: }
25: if (param_2 == 0x7f) {
26: *param_1 = 0x5e;
27: param_1[1] = 0x3f;
28: param_1[2] = 0;
29: return;
30: }
31: }
32: *param_1 = param_2;
33: param_1[1] = 0;
34: return;
35: }
36: 
