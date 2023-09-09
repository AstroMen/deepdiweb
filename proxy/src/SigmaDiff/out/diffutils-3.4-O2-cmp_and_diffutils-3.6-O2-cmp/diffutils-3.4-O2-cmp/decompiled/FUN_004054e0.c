1: 
2: void FUN_004054e0(void **param_1,void **param_2)
3: 
4: {
5: char cVar1;
6: void **__src;
7: void *pvVar2;
8: 
9: __src = (void **)*param_2;
10: if (__src == param_2 + 3) {
11: pvVar2 = memcpy(param_1 + 3,__src,(size_t)param_2[1]);
12: *param_1 = pvVar2;
13: }
14: else {
15: *param_1 = __src;
16: }
17: param_1[1] = param_2[1];
18: cVar1 = *(char *)(param_2 + 2);
19: *(char *)(param_1 + 2) = cVar1;
20: if (cVar1 != '\0') {
21: *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
22: }
23: return;
24: }
25: 
