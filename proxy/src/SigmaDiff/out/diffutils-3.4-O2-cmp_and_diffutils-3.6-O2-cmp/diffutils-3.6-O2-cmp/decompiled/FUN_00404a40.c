1: 
2: long FUN_00404a40(void)
3: 
4: {
5: long lVar1;
6: int *piVar2;
7: 
8: lVar1 = FUN_00407790();
9: if (lVar1 == 0) {
10: piVar2 = __errno_location();
11: if (*piVar2 == 0xc) {
12: /* WARNING: Subroutine does not return */
13: FUN_004049b0();
14: }
15: }
16: return lVar1;
17: }
18: 
