1: 
2: void FUN_004047d0(size_t param_1,size_t param_2)
3: 
4: {
5: void *pvVar1;
6: 
7: pvVar1 = calloc(param_1,param_2);
8: if (pvVar1 != (void *)0x0) {
9: return;
10: }
11: /* WARNING: Subroutine does not return */
12: FUN_00404840();
13: }
14: 
