1: 
2: void FUN_00404510(void)
3: 
4: {
5: long lVar1;
6: long in_FS_OFFSET;
7: 
8: lVar1 = *(long *)(in_FS_OFFSET + 0x28);
9: FUN_00404480();
10: if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
11: return;
12: }
13: /* WARNING: Subroutine does not return */
14: __stack_chk_fail();
15: }
16: 
