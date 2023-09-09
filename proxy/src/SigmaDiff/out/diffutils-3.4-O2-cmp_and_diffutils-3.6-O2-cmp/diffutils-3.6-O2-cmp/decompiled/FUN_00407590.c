1: 
2: char * FUN_00407590(char *param_1,iconv_t param_2)
3: 
4: {
5: char *__ptr;
6: size_t sVar1;
7: int *piVar2;
8: char *pcVar3;
9: char *pcVar4;
10: char *pcVar5;
11: long in_FS_OFFSET;
12: char *local_60;
13: char *local_58;
14: char *local_50;
15: char *local_48;
16: long local_40;
17: 
18: local_40 = *(long *)(in_FS_OFFSET + 0x28);
19: local_60 = param_1;
20: local_58 = (char *)strlen(param_1);
21: pcVar5 = (char *)((long)local_58 << 4);
22: if ((char *)0xfffffff < local_58) {
23: pcVar5 = local_58;
24: }
25: __ptr = (char *)malloc((size_t)(pcVar5 + 1));
26: if (__ptr != (char *)0x0) {
27: iconv(param_2,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
28: pcVar3 = pcVar5 + 1;
29: local_50 = __ptr;
30: local_48 = pcVar5;
31: while (sVar1 = iconv(param_2,&local_60,(size_t *)&local_58,&local_50,(size_t *)&local_48),
32: sVar1 == 0xffffffffffffffff) {
33: piVar2 = __errno_location();
34: if (*piVar2 == 0x16) break;
35: if (*piVar2 != 7) goto LAB_00407747;
36: pcVar5 = (char *)((long)pcVar3 * 2);
37: pcVar4 = local_50 + -(long)__ptr;
38: if ((pcVar5 <= pcVar3) ||
39: (pcVar3 = (char *)realloc(__ptr,(size_t)pcVar5), pcVar3 == (char *)0x0)) goto LAB_00407740;
40: local_50 = pcVar3 + (long)pcVar4;
41: local_48 = pcVar5 + (-1 - (long)pcVar4);
42: __ptr = pcVar3;
43: pcVar3 = pcVar5;
44: }
45: do {
46: sVar1 = iconv(param_2,(char **)0x0,(size_t *)0x0,&local_50,(size_t *)&local_48);
47: if (sVar1 != 0xffffffffffffffff) goto code_r0x0040770b;
48: piVar2 = __errno_location();
49: if (*piVar2 != 7) goto LAB_00407747;
50: pcVar5 = (char *)((long)pcVar3 * 2);
51: pcVar4 = local_50 + -(long)__ptr;
52: if ((pcVar5 <= pcVar3) ||
53: (pcVar3 = (char *)realloc(__ptr,(size_t)pcVar5), pcVar3 == (char *)0x0)) goto LAB_00407740;
54: local_50 = pcVar3 + (long)pcVar4;
55: local_48 = pcVar5 + (-1 - (long)pcVar4);
56: __ptr = pcVar3;
57: pcVar3 = pcVar5;
58: } while( true );
59: }
60: piVar2 = __errno_location();
61: *piVar2 = 0xc;
62: pcVar4 = (char *)0x0;
63: LAB_00407751:
64: if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
65: /* WARNING: Subroutine does not return */
66: __stack_chk_fail();
67: }
68: return pcVar4;
69: code_r0x0040770b:
70: pcVar5 = local_50 + 1;
71: *local_50 = '\0';
72: pcVar4 = __ptr;
73: local_50 = pcVar5;
74: if ((pcVar5 + -(long)__ptr < pcVar3) &&
75: (pcVar4 = (char *)realloc(__ptr,(size_t)(pcVar5 + -(long)__ptr)), pcVar4 == (char *)0x0)) {
76: pcVar4 = __ptr;
77: }
78: goto LAB_00407751;
79: LAB_00407740:
80: *piVar2 = 0xc;
81: LAB_00407747:
82: free(__ptr);
83: pcVar4 = (char *)0x0;
84: goto LAB_00407751;
85: }
86: 
