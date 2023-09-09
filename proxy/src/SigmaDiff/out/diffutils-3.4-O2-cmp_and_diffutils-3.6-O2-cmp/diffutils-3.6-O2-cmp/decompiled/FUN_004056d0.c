1: 
2: undefined8 FUN_004056d0(char *param_1,long param_2,ulong param_3,char **param_4)
3: 
4: {
5: char ***pppcVar1;
6: long *plVar2;
7: ulong uVar3;
8: undefined8 uVar4;
9: char cVar5;
10: long lVar6;
11: char ***pppcVar7;
12: char *pcVar8;
13: long in_FS_OFFSET;
14: char **local_38;
15: long local_30;
16: long local_20;
17: 
18: pppcVar7 = &local_38;
19: local_20 = *(long *)(in_FS_OFFSET + 0x28);
20: pppcVar1 = &local_38;
21: if ((-1 < SUB168(ZEXT816(8) * ZEXT816(param_3),0)) &&
22: (pppcVar1 = &local_38, SUB168(ZEXT816(8) * ZEXT816(param_3) >> 0x40,0) == 0)) {
23: if (param_3 * 8 < 0xfb0) {
24: lVar6 = -(param_3 * 8 + 0x2e & 0xfffffffffffffff0);
25: pppcVar7 = (char ***)((long)&local_38 + lVar6);
26: plVar2 = (long *)((long)&local_20 + lVar6);
27: }
28: else {
29: local_38 = param_4;
30: local_30 = param_2;
31: plVar2 = (long *)FUN_00407860();
32: param_4 = local_38;
33: param_2 = local_30;
34: }
35: pppcVar1 = pppcVar7;
36: if (plVar2 != (long *)0x0) {
37: lVar6 = 0;
38: plVar2[1] = 1;
39: uVar3 = 2;
40: if (2 < param_3) {
41: do {
42: cVar5 = *(char *)(param_2 + lVar6);
43: while (cVar5 != *(char *)(param_2 + -1 + uVar3)) {
44: if (lVar6 == 0) {
45: plVar2[uVar3] = uVar3;
46: lVar6 = 0;
47: goto LAB_004057a9;
48: }
49: lVar6 = lVar6 - plVar2[lVar6];
50: cVar5 = *(char *)(param_2 + lVar6);
51: }
52: lVar6 = lVar6 + 1;
53: plVar2[uVar3] = uVar3 - lVar6;
54: LAB_004057a9:
55: uVar3 = uVar3 + 1;
56: } while (param_3 != uVar3);
57: }
58: *param_4 = (char *)0x0;
59: cVar5 = *param_1;
60: uVar3 = 0;
61: pcVar8 = param_1;
62: while (cVar5 != '\0') {
63: if (*(char *)(param_2 + uVar3) == cVar5) {
64: uVar3 = uVar3 + 1;
65: if (param_3 == uVar3) {
66: *param_4 = param_1;
67: *(undefined8 *)((long)pppcVar7 + -8) = 0x40585a;
68: FUN_004078e0();
69: uVar4 = 1;
70: goto LAB_0040570f;
71: }
72: cVar5 = pcVar8[1];
73: pcVar8 = pcVar8 + 1;
74: }
75: else {
76: if (uVar3 == 0) {
77: cVar5 = pcVar8[1];
78: param_1 = param_1 + 1;
79: pcVar8 = pcVar8 + 1;
80: }
81: else {
82: param_1 = param_1 + plVar2[uVar3];
83: uVar3 = uVar3 - plVar2[uVar3];
84: }
85: }
86: }
87: *(undefined8 *)((long)pppcVar7 + -8) = 0x4057e9;
88: FUN_004078e0();
89: uVar4 = 1;
90: goto LAB_0040570f;
91: }
92: }
93: pppcVar7 = pppcVar1;
94: uVar4 = 0;
95: LAB_0040570f:
96: if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
97: /* WARNING: Subroutine does not return */
98: *(undefined8 *)((long)pppcVar7 + -8) = 0x405873;
99: __stack_chk_fail();
100: }
101: return uVar4;
102: }
103: 
