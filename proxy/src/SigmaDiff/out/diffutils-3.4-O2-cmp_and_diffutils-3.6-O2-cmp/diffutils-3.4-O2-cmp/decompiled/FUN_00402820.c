1: 
2: void FUN_00402820(long param_1,undefined8 param_2)
3: 
4: {
5: undefined8 uVar1;
6: undefined8 uVar2;
7: 
8: if (param_1 != 0) {
9: uVar1 = dcgettext(0,param_1,5);
10: error(0,0,uVar1,param_2);
11: }
12: uVar1 = DAT_0060c458;
13: uVar2 = dcgettext(0,"Try \'%s --help\' for more information.",5);
14: error(2,0,uVar2,uVar1);
15: /* WARNING: Subroutine does not return */
16: abort();
17: }
18: 
