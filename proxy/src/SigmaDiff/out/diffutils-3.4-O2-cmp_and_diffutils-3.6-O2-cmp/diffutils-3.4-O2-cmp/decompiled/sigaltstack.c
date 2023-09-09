1: 
2: /* WARNING: Unknown calling convention yet parameter storage is locked */
3: 
4: int sigaltstack(sigaltstack *__ss,sigaltstack *__oss)
5: 
6: {
7: int iVar1;
8: 
9: iVar1 = sigaltstack(__ss,__oss);
10: return iVar1;
11: }
12: 
