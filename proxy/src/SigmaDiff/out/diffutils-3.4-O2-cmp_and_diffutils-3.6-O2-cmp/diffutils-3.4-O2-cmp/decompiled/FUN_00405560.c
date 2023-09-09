1: 
2: undefined8 FUN_00405560(char *param_1,long param_2,ulong param_3,char **param_4)
3: 
4: {
5: undefined *puVar1;
6: long *plVar2;
7: ulong uVar3;
8: undefined8 uVar4;
9: undefined *puVar5;
10: char cVar6;
11: long lVar7;
12: char *pcVar8;
13: long in_FS_OFFSET;
14: undefined auStack72 [8];
15: char **local_40;
16: ulong local_38;
17: long local_30 [4];
18: 
19: puVar5 = auStack72;
20: local_30[2] = *(long *)(in_FS_OFFSET + 0x28);
21: puVar1 = auStack72;
22: if (param_3 < 0x2000000000000000) {
23: if (param_3 * 8 < 0xfb0) {
24: lVar7 = -(param_3 * 8 + 0x2e & 0xfffffffffffffff0);
25: puVar5 = auStack72 + lVar7;
26: plVar2 = (long *)((long)local_30 + lVar7);
27: }
28: else {
29: local_40 = param_4;
30: local_38 = param_3;
31: local_30[0] = param_2;
32: plVar2 = (long *)FUN_004076c0();
33: param_4 = local_40;
34: param_3 = local_38;
35: param_2 = local_30[0];
36: }
37: puVar1 = puVar5;
38: if (plVar2 != (long *)0x0) {
39: lVar7 = 0;
40: plVar2[1] = 1;
41: uVar3 = 2;
42: if (2 < param_3) {
43: do {
44: cVar6 = *(char *)(param_2 + lVar7);
45: while (*(char *)(param_2 + -1 + uVar3) != cVar6) {
46: if (lVar7 == 0) {
47: plVar2[uVar3] = uVar3;
48: lVar7 = 0;
49: goto LAB_0040562a;
50: }
51: lVar7 = lVar7 - plVar2[lVar7];
52: cVar6 = *(char *)(param_2 + lVar7);
53: }
54: lVar7 = lVar7 + 1;
55: plVar2[uVar3] = uVar3 - lVar7;
56: LAB_0040562a:
57: uVar3 = uVar3 + 1;
58: } while (param_3 != uVar3);
59: }
60: *param_4 = (char *)0x0;
61: cVar6 = *param_1;
62: uVar3 = 0;
63: pcVar8 = param_1;
64: while (cVar6 != '\0') {
65: if (*(char *)(param_2 + uVar3) == cVar6) {
66: uVar3 = uVar3 + 1;
67: if (param_3 == uVar3) {
68: *param_4 = param_1;
69: *(undefined8 *)(puVar5 + -8) = 0x4056ea;
70: FUN_00407740();
71: uVar4 = 1;
72: goto LAB_00405589;
73: }
74: cVar6 = pcVar8[1];
75: pcVar8 = pcVar8 + 1;
76: }
77: else {
78: if (uVar3 == 0) {
79: cVar6 = pcVar8[1];
80: param_1 = param_1 + 1;
81: pcVar8 = pcVar8 + 1;
82: }
83: else {
84: param_1 = param_1 + plVar2[uVar3];
85: uVar3 = uVar3 - plVar2[uVar3];
86: }
87: }
88: }
89: *(undefined8 *)(puVar5 + -8) = 0x40566c;
90: FUN_00407740();
91: uVar4 = 1;
92: goto LAB_00405589;
93: }
94: }
95: puVar5 = puVar1;
96: uVar4 = 0;
97: LAB_00405589:
98: if (local_30[2] != *(long *)(in_FS_OFFSET + 0x28)) {
99: /* WARNING: Subroutine does not return */
100: *(undefined8 *)(puVar5 + -8) = 0x4056f9;
101: __stack_chk_fail();
102: }
103: return uVar4;
104: }
105: 
