1: 
2: uint FUN_004054b0(wint_t param_1)
3: 
4: {
5: uint uVar1;
6: int iVar2;
7: 
8: uVar1 = wcwidth(param_1);
9: if (-1 < (int)uVar1) {
10: return uVar1;
11: }
12: iVar2 = iswcntrl(param_1);
13: return (uint)(iVar2 == 0);
14: }
15: 
