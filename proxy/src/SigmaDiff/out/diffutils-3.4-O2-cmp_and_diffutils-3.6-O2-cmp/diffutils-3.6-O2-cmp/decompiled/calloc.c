1: 
2: /* WARNING: Unknown calling convention yet parameter storage is locked */
3: 
4: void * calloc(size_t __nmemb,size_t __size)
5: 
6: {
7: void *pvVar1;
8: 
9: pvVar1 = calloc(__nmemb,__size);
10: return pvVar1;
11: }
12: 