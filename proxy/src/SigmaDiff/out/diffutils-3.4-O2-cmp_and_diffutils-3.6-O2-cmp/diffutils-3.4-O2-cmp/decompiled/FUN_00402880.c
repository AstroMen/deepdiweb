1: 
2: void FUN_00402880(int param_1,char **param_2,char param_3)
3: 
4: {
5: char *pcVar1;
6: int iVar2;
7: long in_FS_OFFSET;
8: ulong local_38;
9: long local_30;
10: 
11: pcVar1 = *param_2;
12: local_30 = *(long *)(in_FS_OFFSET + 0x28);
13: iVar2 = FUN_00404900(pcVar1,param_2,0,&local_38,"kKMGTPEZY0");
14: if (((iVar2 == 0) || ((iVar2 == 2 && (**param_2 == param_3)))) && (-1 < (long)local_38)) {
15: if ((ulong)(&DAT_0060a2c0)[param_1] <= local_38 && local_38 != (&DAT_0060a2c0)[param_1]) {
16: (&DAT_0060a2c0)[param_1] = local_38;
17: }
18: if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
19: return;
20: }
21: }
22: else {
23: FUN_00402820("invalid --ignore-initial value \'%s\'",pcVar1);
24: }
25: /* WARNING: Subroutine does not return */
26: __stack_chk_fail();
27: }
28: 
