1: 
2: int FUN_00405050(byte *param_1,byte *param_2)
3: 
4: {
5: byte bVar1;
6: byte bVar2;
7: 
8: if (param_1 == param_2) {
9: return 0;
10: }
11: do {
12: bVar1 = *param_1;
13: bVar2 = *param_2;
14: if ((byte)(bVar1 + 0xbf) < 0x1a) {
15: bVar1 = bVar1 + 0x20;
16: }
17: if ((byte)(bVar2 + 0xbf) < 0x1a) {
18: bVar2 = bVar2 + 0x20;
19: }
20: if (bVar1 == 0) break;
21: param_1 = param_1 + 1;
22: param_2 = param_2 + 1;
23: } while (bVar1 == bVar2);
24: return (uint)bVar1 - (uint)bVar2;
25: }
26: 
