1: 
2: undefined8 FUN_00407320(char *param_1,size_t param_2,iconv_t param_3,char **param_4,char **param_5)
3: 
4: {
5: int iVar1;
6: size_t sVar2;
7: char *__ptr;
8: int *piVar3;
9: char *pcVar4;
10: undefined8 uVar5;
11: long in_FS_OFFSET;
12: char *local_1068;
13: size_t local_1060;
14: char *local_1058;
15: char *local_1050;
16: char local_1048 [4104];
17: long local_40;
18: 
19: pcVar4 = (char *)0x0;
20: local_40 = *(long *)(in_FS_OFFSET + 0x28);
21: iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
22: local_1068 = param_1;
23: local_1060 = param_2;
24: if (param_2 != 0) {
25: do {
26: local_1050 = (char *)0x1000;
27: local_1058 = local_1048;
28: sVar2 = iconv(param_3,&local_1068,&local_1060,&local_1058,(size_t *)&local_1050);
29: if (sVar2 == 0xffffffffffffffff) {
30: piVar3 = __errno_location();
31: if (*piVar3 != 7) {
32: if (*piVar3 != 0x16) goto LAB_00407527;
33: break;
34: }
35: }
36: pcVar4 = local_1058 + (long)(pcVar4 + -(long)local_1048);
37: } while (local_1060 != 0);
38: }
39: local_1050 = (char *)0x1000;
40: local_1058 = local_1048;
41: sVar2 = iconv(param_3,(char **)0x0,(size_t *)0x0,&local_1058,(size_t *)&local_1050);
42: if (sVar2 != 0xffffffffffffffff) {
43: pcVar4 = local_1058 + (long)(pcVar4 + -(long)local_1048);
44: if (pcVar4 == (char *)0x0) {
45: uVar5 = 0;
46: *param_5 = (char *)0x0;
47: goto LAB_004074d6;
48: }
49: __ptr = *param_4;
50: if (((__ptr != (char *)0x0) && (pcVar4 < *param_5 || pcVar4 == *param_5)) ||
51: (__ptr = (char *)malloc((size_t)pcVar4), __ptr != (char *)0x0)) {
52: iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
53: local_1068 = param_1;
54: local_1060 = param_2;
55: local_1058 = __ptr;
56: local_1050 = pcVar4;
57: do {
58: if (local_1060 == 0) goto LAB_0040749c;
59: sVar2 = iconv(param_3,&local_1068,&local_1060,&local_1058,(size_t *)&local_1050);
60: } while (sVar2 != 0xffffffffffffffff);
61: piVar3 = __errno_location();
62: if (*piVar3 == 0x16) {
63: LAB_0040749c:
64: sVar2 = iconv(param_3,(char **)0x0,(size_t *)0x0,&local_1058,(size_t *)&local_1050);
65: if (sVar2 != 0xffffffffffffffff) {
66: if (local_1050 != (char *)0x0) {
67: /* WARNING: Subroutine does not return */
68: abort();
69: }
70: *param_4 = __ptr;
71: *param_5 = pcVar4;
72: uVar5 = 0;
73: goto LAB_004074d6;
74: }
75: }
76: uVar5 = 0xffffffff;
77: if (__ptr != *param_4) {
78: piVar3 = __errno_location();
79: iVar1 = *piVar3;
80: free(__ptr);
81: *piVar3 = iVar1;
82: }
83: goto LAB_004074d6;
84: }
85: piVar3 = __errno_location();
86: *piVar3 = 0xc;
87: }
88: LAB_00407527:
89: uVar5 = 0xffffffff;
90: LAB_004074d6:
91: if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
92: /* WARNING: Subroutine does not return */
93: __stack_chk_fail();
94: }
95: return uVar5;
96: }
97: 
