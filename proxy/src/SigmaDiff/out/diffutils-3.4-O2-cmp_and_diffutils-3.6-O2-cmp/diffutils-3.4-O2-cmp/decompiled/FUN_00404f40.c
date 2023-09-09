1: 
2: ulong FUN_00404f40(ulong param_1,ulong param_2,ulong param_3)
3: 
4: {
5: ulong uVar1;
6: ulong uVar2;
7: ulong uVar3;
8: 
9: if (param_1 == 0) {
10: param_1 = 0x2000;
11: if (param_2 != 0) {
12: param_1 = param_2;
13: }
14: }
15: else {
16: uVar3 = param_1;
17: uVar2 = param_2;
18: if (param_2 != 0) {
19: do {
20: uVar1 = uVar2;
21: uVar2 = uVar3 % uVar1;
22: uVar3 = uVar1;
23: } while (uVar2 != 0);
24: uVar3 = param_2 * (param_1 / uVar1);
25: if (uVar3 < param_3 || uVar3 - param_3 == 0) {
26: if (param_1 / uVar1 == uVar3 / param_2) {
27: param_1 = uVar3;
28: }
29: return param_1;
30: }
31: }
32: }
33: return param_1;
34: }
35: 
