1: 
2: void * FUN_004075f0(char *param_1,char *param_2,char *param_3)
3: 
4: {
5: int iVar1;
6: void *pvVar2;
7: iconv_t __cd;
8: int *piVar3;
9: 
10: if ((*param_1 == '\0') || (iVar1 = FUN_00405050(param_2,param_3), iVar1 == 0)) {
11: pvVar2 = (void *)__strdup(param_1);
12: if (pvVar2 != (void *)0x0) {
13: return pvVar2;
14: }
15: piVar3 = __errno_location();
16: *piVar3 = 0xc;
17: return (void *)0x0;
18: }
19: __cd = iconv_open(param_3,param_2);
20: if (__cd == (iconv_t)0xffffffffffffffff) {
21: return (void *)0x0;
22: }
23: pvVar2 = (void *)FUN_004073f0(param_1,__cd);
24: if (pvVar2 != (void *)0x0) {
25: iVar1 = iconv_close(__cd);
26: if (-1 < iVar1) {
27: return pvVar2;
28: }
29: piVar3 = __errno_location();
30: iVar1 = *piVar3;
31: free(pvVar2);
32: *piVar3 = iVar1;
33: return (void *)0x0;
34: }
35: piVar3 = __errno_location();
36: iVar1 = *piVar3;
37: iconv_close(__cd);
38: *piVar3 = iVar1;
39: return (void *)0x0;
40: }
41: 
