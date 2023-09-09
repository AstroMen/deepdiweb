1: 
2: int FUN_00404880(void)
3: 
4: {
5: int iVar1;
6: int *piVar2;
7: 
8: iVar1 = FUN_00407180();
9: if (iVar1 < 0) {
10: piVar2 = __errno_location();
11: if (*piVar2 == 0xc) {
12: /* WARNING: Subroutine does not return */
13: FUN_00404840();
14: }
15: }
16: return iVar1;
17: }
18: 
