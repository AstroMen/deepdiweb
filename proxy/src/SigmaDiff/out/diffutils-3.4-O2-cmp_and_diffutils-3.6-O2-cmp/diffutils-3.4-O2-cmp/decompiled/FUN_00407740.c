1: 
2: void FUN_00407740(ulong param_1)
3: 
4: {
5: ulong uVar1;
6: ulong uVar2;
7: undefined8 *puVar3;
8: 
9: if ((param_1 != 0) && (*(int *)(param_1 - 4) == 0x1415fb4a)) {
10: uVar1 = *(ulong *)(&DAT_0060c480 + (param_1 % 0x101) * 8);
11: if (uVar1 != 0) {
12: if (param_1 == uVar1) {
13: puVar3 = (undefined8 *)(&DAT_0060c480 + (param_1 % 0x101) * 8);
14: }
15: else {
16: do {
17: uVar2 = uVar1;
18: uVar1 = *(ulong *)(uVar2 - 0x10);
19: if (uVar1 == 0) {
20: return;
21: }
22: } while (param_1 != uVar1);
23: puVar3 = (undefined8 *)(uVar2 - 0x10);
24: }
25: *puVar3 = *(undefined8 *)(param_1 - 0x10);
26: free((void *)(param_1 - 0x10));
27: return;
28: }
29: }
30: return;
31: }
32: 
