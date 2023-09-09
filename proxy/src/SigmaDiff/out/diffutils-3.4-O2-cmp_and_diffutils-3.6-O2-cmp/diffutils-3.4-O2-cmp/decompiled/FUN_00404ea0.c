1: 
2: void * FUN_00404ea0(int param_1,void *param_2,long param_3)
3: 
4: {
5: ssize_t sVar1;
6: int *piVar2;
7: void *__nbytes;
8: void *__buf;
9: void *pvVar3;
10: 
11: pvVar3 = (void *)0x7fffffffffffffff;
12: __buf = param_2;
13: do {
14: __nbytes = (void *)((long)(void *)((long)param_2 + param_3) - (long)__buf);
15: if (pvVar3 < __nbytes) {
16: __nbytes = pvVar3;
17: }
18: sVar1 = read(param_1,__buf,(size_t)__nbytes);
19: if (sVar1 < 1) {
20: if (sVar1 == 0) break;
21: piVar2 = __errno_location();
22: if ((*piVar2 != 0x16) || (__nbytes < (void *)0x80000000)) {
23: return (void *)0xffffffffffffffff;
24: }
25: pvVar3 = (void *)0x7fffffff;
26: }
27: else {
28: __buf = (void *)((long)__buf + sVar1);
29: }
30: } while (__buf < (void *)((long)param_2 + param_3));
31: return (void *)((long)__buf - (long)param_2);
32: }
33: 
