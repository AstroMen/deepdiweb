1: 
2: void FUN_004045c0(void)
3: 
4: {
5: FILE *__stream;
6: undefined8 uVar1;
7: char *__s;
8: 
9: uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
10: __printf_chk(1,uVar1,"bug-diffutils@gnu.org");
11: uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
12: __printf_chk(1,uVar1,"GNU diffutils","http://www.gnu.org/software/diffutils/");
13: __stream = stdout;
14: __s = (char *)dcgettext(0,"General help using GNU software: <http://www.gnu.org/gethelp/>\n",5);
15: fputs_unlocked(__s,__stream);
16: return;
17: }
18: 
