1: 
2: void FUN_00404580(void)
3: 
4: {
5: long lVar1;
6: long *in_R8;
7: long lVar2;
8: 
9: lVar2 = 0;
10: lVar1 = *in_R8;
11: while (lVar1 != 0) {
12: lVar2 = lVar2 + 1;
13: lVar1 = in_R8[lVar2];
14: }
15: FUN_00404190();
16: return;
17: }
18: 
