1: 
2: /* WARNING: Unknown calling convention yet parameter storage is locked */
3: 
4: int sigaction(int __sig,sigaction *__act,sigaction *__oact)
5: 
6: {
7: int iVar1;
8: 
9: iVar1 = sigaction(__sig,__act,__oact);
10: return iVar1;
11: }
12: 
