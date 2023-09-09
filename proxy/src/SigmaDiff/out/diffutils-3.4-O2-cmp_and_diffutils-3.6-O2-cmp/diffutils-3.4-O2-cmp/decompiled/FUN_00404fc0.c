1: 
2: size_t FUN_00404fc0(uint *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)
3: 
4: {
5: char cVar1;
6: size_t sVar2;
7: long in_FS_OFFSET;
8: uint local_34;
9: long local_30;
10: 
11: local_30 = *(long *)(in_FS_OFFSET + 0x28);
12: if (param_1 == (uint *)0x0) {
13: param_1 = &local_34;
14: }
15: sVar2 = mbrtowc((wchar_t *)param_1,(char *)param_2,param_3,param_4);
16: if (((0xfffffffffffffffd < sVar2) && (param_3 != 0)) && (cVar1 = FUN_00402c00(0), cVar1 == '\0'))
17: {
18: *param_1 = (uint)*param_2;
19: sVar2 = 1;
20: }
21: if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
22: /* WARNING: Subroutine does not return */
23: __stack_chk_fail();
24: }
25: return sVar2;
26: }
27: 
