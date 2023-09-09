1: 
2: char * FUN_00402c50(long param_1,long param_2)
3: 
4: {
5: long lVar1;
6: char *pcVar2;
7: char *pcVar3;
8: 
9: pcVar2 = (char *)(param_2 + 0x14);
10: *(undefined *)(param_2 + 0x14) = 0;
11: if (param_1 < 0) {
12: do {
13: pcVar3 = pcVar2;
14: lVar1 = param_1 / 10;
15: pcVar3[-1] = ((char)lVar1 * '\n' + '0') - (char)param_1;
16: pcVar2 = pcVar3 + -1;
17: param_1 = lVar1;
18: } while (lVar1 != 0);
19: pcVar3[-2] = '-';
20: return pcVar3 + -2;
21: }
22: do {
23: pcVar2 = pcVar2 + -1;
24: lVar1 = param_1 / 10;
25: *pcVar2 = (char)param_1 + (char)lVar1 * -10 + '0';
26: param_1 = lVar1;
27: } while (lVar1 != 0);
28: return pcVar2;
29: }
30: 
