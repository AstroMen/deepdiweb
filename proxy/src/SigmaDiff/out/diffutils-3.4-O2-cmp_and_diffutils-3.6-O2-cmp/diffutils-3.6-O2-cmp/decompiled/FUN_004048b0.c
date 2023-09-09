1: 
2: void FUN_004048b0(long param_1,ulong *param_2)
3: 
4: {
5: ulong uVar1;
6: 
7: uVar1 = *param_2;
8: if (param_1 == 0) {
9: if (uVar1 == 0) {
10: uVar1 = 0x80;
11: }
12: if ((long)uVar1 < 0) goto LAB_00404900;
13: }
14: else {
15: if (0x5555555555555553 < uVar1) {
16: LAB_00404900:
17: /* WARNING: Subroutine does not return */
18: FUN_004049b0();
19: }
20: uVar1 = (uVar1 >> 1) + 1 + uVar1;
21: }
22: *param_2 = uVar1;
23: FUN_004047c0(param_1,uVar1);
24: return;
25: }
26: 
