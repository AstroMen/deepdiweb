1: 
2: size_t FUN_00403aa0(void *param_1,size_t param_2)
3: 
4: {
5: void *pvVar1;
6: 
7: pvVar1 = memchr(param_1,0,param_2);
8: if (pvVar1 != (void *)0x0) {
9: return (long)pvVar1 + (1 - (long)param_1);
10: }
11: return param_2;
12: }
13: 
