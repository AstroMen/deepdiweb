1: 
2: void * FUN_00404690(void *param_1,size_t param_2)
3: 
4: {
5: void *pvVar1;
6: 
7: if ((param_2 == 0) && (param_1 != (void *)0x0)) {
8: free(param_1);
9: return (void *)0x0;
10: }
11: pvVar1 = realloc(param_1,param_2);
12: if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
13: /* WARNING: Subroutine does not return */
14: FUN_00404840();
15: }
16: return pvVar1;
17: }
18: 
