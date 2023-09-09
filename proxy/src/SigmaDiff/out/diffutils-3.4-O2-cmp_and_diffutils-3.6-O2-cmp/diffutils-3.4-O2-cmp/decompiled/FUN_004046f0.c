1: 
2: void FUN_004046f0(long param_1,ulong *param_2,ulong param_3)
3: 
4: {
5: undefined auVar1 [16];
6: long lVar2;
7: ulong uVar3;
8: ulong uVar4;
9: 
10: uVar3 = *param_2;
11: if (param_1 == 0) {
12: uVar4 = param_3;
13: if (uVar3 == 0) {
14: auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x80);
15: lVar2 = SUB168(auVar1 / ZEXT816(param_3),0);
16: uVar4 = SUB168(auVar1 % ZEXT816(param_3),0);
17: uVar3 = lVar2 + (ulong)(lVar2 == 0);
18: }
19: }
20: else {
21: auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xaaaaaaaaaaaaaaaa);
22: uVar4 = SUB168(auVar1 % ZEXT816(param_3),0);
23: if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar3) {
24: /* WARNING: Subroutine does not return */
25: FUN_00404840(param_1,param_2,uVar4);
26: }
27: uVar3 = uVar3 + 1 + (uVar3 >> 1);
28: }
29: *param_2 = uVar3;
30: FUN_00404690(param_1,uVar3 * param_3,uVar4,uVar3 * param_3);
31: return;
32: }
33: 
