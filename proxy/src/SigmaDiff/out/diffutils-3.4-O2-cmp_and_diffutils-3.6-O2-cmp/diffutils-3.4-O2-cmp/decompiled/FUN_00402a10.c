1: 
2: void FUN_00402a10(void)
3: 
4: {
5: int iVar1;
6: undefined8 uVar2;
7: int *piVar3;
8: 
9: if ((*(byte *)&stdout->_flags & 0x20) != 0) {
10: uVar2 = dcgettext(0,"write failed",5);
11: error(2,0,&DAT_00407ff4,uVar2);
12: return;
13: }
14: iVar1 = fclose(stdout);
15: if (iVar1 == 0) {
16: return;
17: }
18: uVar2 = dcgettext(0,"standard output",5);
19: piVar3 = __errno_location();
20: error(2,*piVar3,&DAT_00407ff4,uVar2);
21: return;
22: }
23: 
