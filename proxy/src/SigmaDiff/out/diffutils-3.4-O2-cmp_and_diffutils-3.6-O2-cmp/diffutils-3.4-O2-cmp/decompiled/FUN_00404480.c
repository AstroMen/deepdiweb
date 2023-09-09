1: 
2: void FUN_00404480(void)
3: 
4: {
5: uint uVar1;
6: long *plVar2;
7: long lVar3;
8: uint *in_R8;
9: long lVar4;
10: long in_FS_OFFSET;
11: long local_68 [11];
12: long local_10;
13: 
14: lVar4 = 0;
15: local_10 = *(long *)(in_FS_OFFSET + 0x28);
16: do {
17: uVar1 = *in_R8;
18: if (uVar1 < 0x30) {
19: *in_R8 = uVar1 + 8;
20: lVar3 = *(long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
21: local_68[lVar4] = lVar3;
22: }
23: else {
24: plVar2 = *(long **)(in_R8 + 2);
25: *(long **)(in_R8 + 2) = plVar2 + 1;
26: lVar3 = *plVar2;
27: local_68[lVar4] = lVar3;
28: }
29: } while ((lVar3 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
30: FUN_00404070();
31: if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
32: return;
33: }
34: /* WARNING: Subroutine does not return */
35: __stack_chk_fail();
36: }
37: 
