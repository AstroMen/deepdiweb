1: 
2: /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
3: 
4: void FUN_00402b20(code *param_1)
5: 
6: {
7: int iVar1;
8: long in_FS_OFFSET;
9: sigaltstack local_c8;
10: undefined local_a8 [152];
11: ulong local_10;
12: 
13: local_c8.ss_flags = 0;
14: local_c8.ss_sp = &DAT_0060a440;
15: local_10 = *(ulong *)(in_FS_OFFSET + 0x28);
16: local_c8.ss_size = 0x2000;
17: iVar1 = sigaltstack(&local_c8,(sigaltstack *)0x0);
18: if (iVar1 == 0) {
19: if (param_1 == (code *)0x0) {
20: param_1 = FUN_00402a80;
21: }
22: DAT_0060c450 = param_1;
23: _DAT_0060c448 = dcgettext(0,"program error",5);
24: DAT_0060c440 = dcgettext(0,"stack overflow",5);
25: sigemptyset((sigset_t *)(local_a8 + 8));
26: local_a8._136_4_ = 0xc8000004;
27: local_a8._0_8_ = FUN_00402a90;
28: sigaction(0xb,(sigaction *)local_a8,(sigaction *)0x0);
29: }
30: if (local_10 == *(ulong *)(in_FS_OFFSET + 0x28)) {
31: return;
32: }
33: /* WARNING: Subroutine does not return */
34: __stack_chk_fail();
35: }
36: 
