1: 
2: uint FUN_004056b0(uint param_1)
3: 
4: {
5: return *(uint *)(&DAT_00408f00 + (ulong)(param_1 >> 5 & 7) * 4) >> ((byte)param_1 & 0x1f) & 1;
6: }
7: 
