1: 
2: void FUN_00404760(long param_1,ulong *param_2)
3: 
4: {
5: ulong uVar1;
6: 
7: uVar1 = *param_2;
8: if (param_1 == 0) {
9: if (uVar1 == 0) {
10: uVar1 = 0x80;
11: }
12: *param_2 = uVar1;
13: FUN_00404690(0,uVar1);
14: return;
15: }
16: if (uVar1 < 0xaaaaaaaaaaaaaaaa) {
17: uVar1 = (uVar1 >> 1) + 1 + uVar1;
18: *param_2 = uVar1;
19: FUN_00404690(param_1,uVar1);
20: return;
21: }
22: /* WARNING: Subroutine does not return */
23: FUN_00404840();
24: }
25: 
