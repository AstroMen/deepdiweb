1: 
2: __off_t FUN_00402a30(int param_1)
3: 
4: {
5: int __fd;
6: __off_t _Var1;
7: long lVar2;
8: 
9: lVar2 = (long)param_1;
10: if ((&DAT_0060a2b0)[lVar2] != '\0') {
11: return *(__off_t *)(&DAT_0060a2a0 + lVar2 * 8);
12: }
13: _Var1 = (&DAT_0060a2c0)[lVar2];
14: __fd = (&DAT_0060a420)[lVar2];
15: (&DAT_0060a2b0)[lVar2] = 1;
16: _Var1 = lseek(__fd,_Var1,1);
17: *(__off_t *)(&DAT_0060a2a0 + lVar2 * 8) = _Var1;
18: return _Var1;
19: }
20: 
