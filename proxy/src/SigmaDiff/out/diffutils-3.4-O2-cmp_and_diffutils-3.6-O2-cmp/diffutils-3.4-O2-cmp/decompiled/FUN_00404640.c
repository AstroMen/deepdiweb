1: 
2: void FUN_00404640(size_t param_1)
3: 
4: {
5: void *pvVar1;
6: 
7: pvVar1 = malloc(param_1);
8: if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
9: /* WARNING: Subroutine does not return */
10: FUN_00404840();
11: }
12: return;
13: }
14: 