1: 
2: void FUN_00402ba0(void)
3: 
4: {
5: char *__s;
6: char *__s_00;
7: size_t sVar1;
8: 
9: (*DAT_0060c450)(0);
10: __s_00 = (char *)FUN_00402d10();
11: __s = DAT_0060c440;
12: sVar1 = strlen(__s_00);
13: write(2,__s_00,sVar1);
14: write(2,&DAT_00408664,2);
15: sVar1 = strlen(__s);
16: write(2,__s,sVar1);
17: write(2,&DAT_00408285,1);
18: /* WARNING: Subroutine does not return */
19: _exit(DAT_0060a238);
20: }
21: 
