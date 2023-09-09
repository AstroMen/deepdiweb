1: 
2: /* WARNING: Unknown calling convention yet parameter storage is locked */
3: 
4: size_t iconv(iconv_t __cd,char **__inbuf,size_t *__inbytesleft,char **__outbuf,
5: size_t *__outbytesleft)
6: 
7: {
8: size_t sVar1;
9: 
10: sVar1 = iconv(__cd,__inbuf,__inbytesleft,__outbuf,__outbytesleft);
11: return sVar1;
12: }
13: 
