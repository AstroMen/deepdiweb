1: 
2: void FUN_00402a90(void)
3: 
4: {
5: char *__s;
6: char *__buf;
7: size_t sVar1;
8: 
9: (*DAT_0060c450)(0);
10: __buf = DAT_0060c458;
11: __s = DAT_0060c440;
12: sVar1 = strlen(DAT_0060c458);
13: write(2,__buf,sVar1);
14: write(2,&DAT_00408424,2);
15: sVar1 = strlen(__s);
16: write(2,__s,sVar1);
17: write(2,&DAT_0040806d,1);
18: /* WARNING: Subroutine does not return */
19: _exit(DAT_0060a238);
20: }
21: 
