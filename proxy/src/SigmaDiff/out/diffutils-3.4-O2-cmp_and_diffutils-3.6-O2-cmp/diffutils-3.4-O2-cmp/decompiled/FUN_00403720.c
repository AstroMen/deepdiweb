1: 
2: char * FUN_00403720(char *param_1)
3: 
4: {
5: char cVar1;
6: char *__s;
7: size_t sVar2;
8: size_t sVar3;
9: char *pcVar4;
10: 
11: __s = (char *)dcgettext(0,param_1,5);
12: pcVar4 = param_1;
13: if (param_1 != __s) {
14: cVar1 = FUN_00402da0(__s,param_1);
15: pcVar4 = __s;
16: if (cVar1 == '\0') {
17: sVar2 = strlen(__s);
18: sVar3 = strlen(param_1);
19: pcVar4 = (char *)FUN_00404640(sVar2 + 4 + sVar3);
20: __sprintf_chk(pcVar4,1,0xffffffffffffffff,"%s (%s)",__s,param_1);
21: return pcVar4;
22: }
23: }
24: return pcVar4;
25: }
26: 
