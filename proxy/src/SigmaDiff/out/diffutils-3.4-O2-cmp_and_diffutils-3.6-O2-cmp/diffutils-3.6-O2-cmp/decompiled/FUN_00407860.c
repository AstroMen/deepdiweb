1: 
2: undefined8 * FUN_00407860(ulong param_1)
3: 
4: {
5: undefined8 uVar1;
6: undefined8 *puVar2;
7: undefined8 *puVar3;
8: 
9: if (param_1 <= param_1 + 0x10) {
10: puVar2 = (undefined8 *)malloc(param_1 + 0x10);
11: if (puVar2 == (undefined8 *)0x0) {
12: puVar3 = (undefined8 *)0x0;
13: }
14: else {
15: puVar3 = puVar2 + 2;
16: *(undefined4 *)((long)puVar2 + 0xc) = 0x1415fb4a;
17: uVar1 = *(undefined8 *)(&DAT_0060c480 + ((ulong)puVar3 % 0x101) * 8);
18: *(undefined8 **)(&DAT_0060c480 + ((ulong)puVar3 % 0x101) * 8) = puVar3;
19: *puVar2 = uVar1;
20: }
21: return puVar3;
22: }
23: return (undefined8 *)0x0;
24: }
25: 
