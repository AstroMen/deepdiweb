1: 
2: void FUN_00404930(size_t param_1,ulong param_2)
3: 
4: {
5: void *pvVar1;
6: 
7: if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
8: (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
9: pvVar1 = calloc(param_1,param_2);
10: if (pvVar1 != (void *)0x0) {
11: return;
12: }
13: }
14: /* WARNING: Subroutine does not return */
15: FUN_004049b0();
16: }
17: 
