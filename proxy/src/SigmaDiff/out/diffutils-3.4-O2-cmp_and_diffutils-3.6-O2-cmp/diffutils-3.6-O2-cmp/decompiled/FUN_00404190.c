1: 
2: undefined8
3: FUN_00404190(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
4: undefined8 param_6)
5: 
6: {
7: undefined8 uVar1;
8: char *pcVar2;
9: undefined8 uVar3;
10: undefined8 uVar4;
11: undefined8 uVar5;
12: undefined8 uVar6;
13: undefined8 uVar7;
14: undefined8 uVar8;
15: undefined8 local_58;
16: undefined8 local_50;
17: undefined8 local_48;
18: undefined8 local_40;
19: 
20: if (param_2 == 0) {
21: __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
22: }
23: else {
24: __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
25: }
26: uVar1 = dcgettext(0,&DAT_00408775,5);
27: __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
28: pcVar2 = (char *)dcgettext(0,
29: "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
30: ,5);
31: fputs_unlocked(pcVar2,param_1);
32: switch(param_6) {
33: case 0:
34: /* WARNING: Subroutine does not return */
35: abort();
36: case 1:
37: uVar1 = *param_5;
38: uVar8 = dcgettext(0,"Written by %s.\n",5);
39: uVar1 = __fprintf_chk(param_1,1,uVar8,uVar1);
40: return uVar1;
41: case 2:
42: uVar1 = param_5[1];
43: uVar8 = *param_5;
44: uVar4 = dcgettext(0,"Written by %s and %s.\n",5);
45: uVar1 = __fprintf_chk(param_1,1,uVar4,uVar8,uVar1);
46: return uVar1;
47: case 3:
48: uVar1 = param_5[2];
49: uVar8 = param_5[1];
50: uVar4 = *param_5;
51: uVar5 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
52: uVar1 = __fprintf_chk(param_1,1,uVar5,uVar4,uVar8,uVar1);
53: return uVar1;
54: case 4:
55: uVar8 = param_5[3];
56: uVar4 = param_5[2];
57: uVar5 = param_5[1];
58: uVar7 = *param_5;
59: uVar1 = 0x4043f8;
60: uVar3 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
61: goto LAB_004043fc;
62: case 5:
63: uVar1 = param_5[4];
64: uVar8 = param_5[3];
65: uVar4 = param_5[2];
66: uVar5 = param_5[1];
67: uVar7 = *param_5;
68: uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
69: LAB_004043fc:
70: __fprintf_chk(param_1,1,uVar3,uVar7,uVar5,uVar4,uVar8,uVar1);
71: return uVar8;
72: case 6:
73: local_58 = param_5[1];
74: uVar4 = param_5[5];
75: uVar5 = param_5[4];
76: uVar7 = param_5[3];
77: uVar1 = param_5[2];
78: uVar3 = *param_5;
79: uVar8 = 0x40448c;
80: uVar6 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
81: goto LAB_00404499;
82: case 7:
83: uVar1 = param_5[2];
84: uVar8 = param_5[6];
85: uVar4 = param_5[5];
86: uVar5 = param_5[4];
87: uVar7 = param_5[3];
88: local_58 = param_5[1];
89: uVar3 = *param_5;
90: uVar6 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
91: LAB_00404499:
92: uVar1 = __fprintf_chk(param_1,1,uVar6,uVar3,local_58,uVar1,uVar7,uVar5,uVar4,uVar8);
93: return uVar1;
94: case 8:
95: local_48 = param_5[7];
96: local_58 = param_5[2];
97: local_50 = param_5[1];
98: uVar1 = param_5[6];
99: uVar8 = param_5[5];
100: uVar4 = param_5[4];
101: uVar5 = param_5[3];
102: uVar7 = *param_5;
103: local_40 = 0x40426e;
104: uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
105: goto LAB_00404272;
106: case 9:
107: local_40 = param_5[8];
108: local_48 = param_5[7];
109: local_58 = param_5[2];
110: local_50 = param_5[1];
111: pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
112: uVar1 = param_5[6];
113: uVar8 = param_5[5];
114: uVar4 = param_5[4];
115: uVar5 = param_5[3];
116: uVar7 = *param_5;
117: break;
118: default:
119: local_40 = param_5[8];
120: local_48 = param_5[7];
121: local_58 = param_5[2];
122: local_50 = param_5[1];
123: pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
124: uVar1 = param_5[6];
125: uVar8 = param_5[5];
126: uVar4 = param_5[4];
127: uVar5 = param_5[3];
128: uVar7 = *param_5;
129: }
130: uVar3 = dcgettext(0,pcVar2,5);
131: LAB_00404272:
132: uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar5,uVar4,uVar8,uVar1,local_48,
133: local_40);
134: return uVar1;
135: }
136: 
