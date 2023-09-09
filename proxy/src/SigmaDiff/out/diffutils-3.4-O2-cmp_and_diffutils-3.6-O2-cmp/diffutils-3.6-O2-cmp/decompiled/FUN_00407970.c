1: 
2: size_t FUN_00407970(byte *param_1)
3: 
4: {
5: bool bVar1;
6: byte *pbVar2;
7: int iVar3;
8: size_t sVar4;
9: size_t sVar5;
10: undefined8 uVar6;
11: long in_FS_OFFSET;
12: mbstate_t local_64;
13: undefined local_5c;
14: byte *local_58;
15: size_t local_50;
16: undefined local_48;
17: int local_44 [9];
18: long local_20;
19: 
20: local_20 = *(long *)(in_FS_OFFSET + 0x28);
21: sVar4 = __ctype_get_mb_cur_max();
22: if (sVar4 < 2) {
23: sVar4 = strlen((char *)param_1);
24: }
25: else {
26: bVar1 = false;
27: sVar4 = 0;
28: local_64 = (mbstate_t)0x0;
29: local_58 = param_1;
30: LAB_004079c8:
31: local_5c = 0;
32: if ((*(uint *)(&DAT_00408f00 + (ulong)(*local_58 >> 5) * 4) >> (*local_58 & 0x1f) & 1) == 0) {
33: iVar3 = mbsinit(&local_64);
34: if (iVar3 != 0) {
35: bVar1 = true;
36: goto LAB_00407a5b;
37: }
38: /* WARNING: Subroutine does not return */
39: __assert_fail("mbsinit (&iter->state)","mbuiter.h",0x96,"mbuiter_multi_next");
40: }
41: local_50 = 1;
42: local_44[0] = (int)(char)*local_58;
43: local_48 = 1;
44: while (local_5c = 1, local_44[0] != 0) {
45: while( true ) {
46: while( true ) {
47: sVar4 = sVar4 + 1;
48: local_58 = local_58 + local_50;
49: local_5c = 0;
50: if (!bVar1) goto LAB_004079c8;
51: LAB_00407a5b:
52: sVar5 = __ctype_get_mb_cur_max();
53: pbVar2 = local_58;
54: uVar6 = FUN_00403bc0(local_58,sVar5);
55: local_50 = FUN_00405130(local_44,pbVar2,uVar6,&local_64);
56: if (local_50 != 0xffffffffffffffff) break;
57: local_50 = 1;
58: local_48 = 0;
59: }
60: if (local_50 != 0xfffffffffffffffe) break;
61: local_50 = strlen((char *)local_58);
62: local_48 = 0;
63: }
64: if (local_50 == 0) {
65: local_50 = 1;
66: if (*local_58 != 0) {
67: /* WARNING: Subroutine does not return */
68: __assert_fail("*iter->cur.ptr == \'\\0\'","mbuiter.h",0xb2,"mbuiter_multi_next");
69: }
70: if (local_44[0] != 0) {
71: /* WARNING: Subroutine does not return */
72: __assert_fail("iter->cur.wc == 0","mbuiter.h",0xb3,"mbuiter_multi_next");
73: }
74: }
75: local_48 = 1;
76: iVar3 = mbsinit(&local_64);
77: if (iVar3 != 0) {
78: bVar1 = false;
79: }
80: }
81: }
82: if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
83: return sVar4;
84: }
85: /* WARNING: Subroutine does not return */
86: __stack_chk_fail();
87: }
88: 
