1: 
2: void FUN_00402930(long param_1,undefined8 param_2)
3: 
4: {
5: undefined8 uVar1;
6: undefined8 uVar2;
7: 
8: uVar1 = DAT_0060c458;
9: if (param_1 != 0) {
10: uVar1 = dcgettext(0,param_1,5);
11: /* WARNING: Subroutine does not return */
12: error(0,0,uVar1,param_2);
13: }
14: uVar2 = dcgettext(0,"Try \'%s --help\' for more information.",5);
15: /* WARNING: Subroutine does not return */
16: error(2,0,uVar2,uVar1);
17: }
18: 
