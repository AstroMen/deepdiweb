1: 
2: void FUN_00404830(long param_1,ulong *param_2,ulong param_3)
3: 
4: {
5: undefined auVar1 [16];
6: long lVar2;
7: ulong uVar3;
8: ulong uVar4;
9: 
10: uVar3 = *param_2;
11: if (param_1 == 0) {
12: if (uVar3 == 0) {
13: lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
14: uVar3 = lVar2 + (ulong)(lVar2 == 0);
15: }
16: uVar4 = (ulong)(SUB168(ZEXT816(uVar3) * ZEXT816(param_3) >> 0x40,0) != 0);
17: if ((SUB168(ZEXT816(uVar3) * ZEXT816(param_3),0) < 0) || (uVar4 != 0)) goto LAB_004048ab;
18: }
19: else {
20: auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
21: uVar4 = SUB168(auVar1 % ZEXT816(param_3),0);
22: if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar3) {
23: LAB_004048ab:
24: /* WARNING: Subroutine does not return */
25: FUN_004049b0(param_1,param_2,uVar4);
26: }
27: uVar3 = uVar3 + 1 + (uVar3 >> 1);
28: }
29: *param_2 = uVar3;
30: FUN_004047c0(param_1,uVar3 * param_3,uVar4,uVar3 * param_3);
31: return;
32: }
33: 
