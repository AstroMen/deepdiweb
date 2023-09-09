1: 
2: void FUN_00407b80(undefined4 param_1,undefined8 param_2,undefined8 param_3)
3: 
4: {
5: long lVar1;
6: 
7: _DT_INIT();
8: lVar1 = 0;
9: do {
10: (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
11: lVar1 = lVar1 + 1;
12: } while (lVar1 != 1);
13: return;
14: }
15: 
