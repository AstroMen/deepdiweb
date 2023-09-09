1: 
2: ulong FUN_00402c00(int param_1)
3: 
4: {
5: char *pcVar1;
6: long lVar2;
7: char *pcVar3;
8: char *pcVar4;
9: bool bVar5;
10: byte bVar6;
11: 
12: bVar6 = 0;
13: pcVar1 = setlocale(param_1,(char *)0x0);
14: if (pcVar1 == (char *)0x0) {
15: return 1;
16: }
17: bVar5 = *pcVar1 == 'C';
18: if ((bVar5) && (bVar5 = pcVar1[1] == '\0', bVar5)) {
19: return 0;
20: }
21: lVar2 = 6;
22: pcVar3 = pcVar1;
23: pcVar4 = "POSIX";
24: do {
25: if (lVar2 == 0) break;
26: lVar2 = lVar2 + -1;
27: bVar5 = *pcVar3 == *pcVar4;
28: pcVar3 = pcVar3 + (ulong)bVar6 * -2 + 1;
29: pcVar4 = pcVar4 + (ulong)bVar6 * -2 + 1;
30: } while (bVar5);
31: return (ulong)pcVar1 & 0xffffffffffffff00 | (ulong)!bVar5;
32: }
33: 
