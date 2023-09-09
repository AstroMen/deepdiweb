1: 
2: void FUN_00402e20(byte *param_1)
3: 
4: {
5: byte *pbVar1;
6: char *pcVar2;
7: byte *pbVar3;
8: long lVar4;
9: byte *pbVar5;
10: bool bVar6;
11: bool bVar7;
12: byte bVar8;
13: 
14: bVar8 = 0;
15: if (param_1 == (byte *)0x0) {
16: fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
17: /* WARNING: Subroutine does not return */
18: abort();
19: }
20: pcVar2 = strrchr((char *)param_1,0x2f);
21: if (pcVar2 != (char *)0x0) {
22: pbVar1 = (byte *)(pcVar2 + 1);
23: pbVar3 = pbVar1 + -(long)param_1;
24: bVar6 = pbVar3 < (byte *)0x6;
25: bVar7 = pbVar3 == (byte *)0x6;
26: if (6 < (long)pbVar3) {
27: lVar4 = 7;
28: pbVar3 = (byte *)(pcVar2 + -6);
29: pbVar5 = (byte *)"/.libs/";
30: do {
31: if (lVar4 == 0) break;
32: lVar4 = lVar4 + -1;
33: bVar6 = *pbVar3 < *pbVar5;
34: bVar7 = *pbVar3 == *pbVar5;
35: pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
36: pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
37: } while (bVar7);
38: if (bVar7) {
39: lVar4 = 3;
40: pbVar3 = pbVar1;
41: pbVar5 = &DAT_004086d0;
42: do {
43: if (lVar4 == 0) break;
44: lVar4 = lVar4 + -1;
45: bVar6 = *pbVar3 < *pbVar5;
46: bVar7 = *pbVar3 == *pbVar5;
47: pbVar3 = pbVar3 + (ulong)bVar8 * -2 + 1;
48: pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
49: } while (bVar7);
50: param_1 = pbVar1;
51: if ((!bVar6 && !bVar7) == bVar6) {
52: param_1 = (byte *)(pcVar2 + 4);
53: program_invocation_short_name = param_1;
54: }
55: }
56: }
57: }
58: program_invocation_name = param_1;
59: DAT_0060c458 = param_1;
60: return;
61: }
62: 
