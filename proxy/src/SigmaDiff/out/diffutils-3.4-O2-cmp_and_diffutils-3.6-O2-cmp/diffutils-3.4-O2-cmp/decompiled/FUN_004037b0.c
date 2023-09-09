1: 
2: char * FUN_004037b0(char *param_1,char *param_2)
3: 
4: {
5: char *pcVar1;
6: char cVar2;
7: int iVar3;
8: char *__s1;
9: char *pcVar4;
10: char *__s;
11: void *pvVar5;
12: char *pcVar6;
13: size_t sVar7;
14: size_t sVar8;
15: char *pcVar9;
16: undefined8 *puVar10;
17: char *local_40;
18: 
19: __s1 = (char *)dcgettext(0,param_1,5);
20: pcVar4 = (char *)FUN_004050a0();
21: iVar3 = FUN_00405050(pcVar4,"UTF-8");
22: pcVar1 = param_1;
23: pcVar9 = __s1;
24: if (iVar3 == 0) {
25: if (param_2 == (char *)0x0) {
26: local_40 = (char *)0x0;
27: pcVar4 = (char *)0x0;
28: pcVar6 = (char *)0x0;
29: }
30: else {
31: pcVar1 = param_2;
32: pcVar4 = (char *)0x0;
33: pcVar6 = (char *)0x0;
34: local_40 = param_2;
35: }
36: LAB_0040380a:
37: __s = pcVar1;
38: iVar3 = strcmp(__s1,param_1);
39: if (iVar3 == 0) {
40: return __s;
41: }
42: cVar2 = FUN_00402da0(__s1,param_1);
43: if (cVar2 == '\0') {
44: LAB_0040382c:
45: if (((local_40 == (char *)0x0) || (cVar2 = FUN_00402da0(__s1,local_40), cVar2 == '\0')) &&
46: ((param_2 == (char *)0x0 || (cVar2 = FUN_00402da0(__s1,param_2), cVar2 == '\0')))) {
47: sVar7 = strlen(__s1);
48: sVar8 = strlen(__s);
49: pcVar9 = (char *)FUN_00404640(sVar7 + 4 + sVar8);
50: __sprintf_chk(pcVar9,1,0xffffffffffffffff,"%s (%s)",__s1,__s);
51: if (pcVar4 != (char *)0x0) {
52: free(pcVar4);
53: }
54: goto joined_r0x0040387b;
55: }
56: }
57: param_2 = pcVar6;
58: __s = pcVar4;
59: pcVar6 = param_2;
60: if (pcVar4 == (char *)0x0) goto joined_r0x0040387b;
61: }
62: else {
63: __s = (char *)FUN_004048d0(param_2,"UTF-8",pcVar4);
64: sVar7 = strlen(pcVar4);
65: pvVar5 = (void *)FUN_00404640(sVar7 + 0xb);
66: pvVar5 = memcpy(pvVar5,pcVar4,sVar7);
67: puVar10 = (undefined8 *)(sVar7 + (long)pvVar5);
68: *puVar10 = 0x4c534e4152542f2f;
69: *(undefined2 *)(puVar10 + 1) = 0x5449;
70: *(undefined *)((long)puVar10 + 10) = 0;
71: param_2 = (char *)FUN_004048d0(param_2,"UTF-8",pvVar5);
72: free(pvVar5);
73: pcVar4 = __s;
74: local_40 = __s;
75: if (param_2 == (char *)0x0) {
76: LAB_00403953:
77: if (__s == (char *)0x0) {
78: param_2 = (char *)0x0;
79: local_40 = (char *)0x0;
80: pcVar6 = (char *)0x0;
81: }
82: else {
83: param_2 = (char *)0x0;
84: pcVar1 = __s;
85: pcVar6 = (char *)0x0;
86: }
87: goto LAB_0040380a;
88: }
89: pcVar6 = strchr(param_2,0x3f);
90: if (pcVar6 != (char *)0x0) {
91: free(param_2);
92: goto LAB_00403953;
93: }
94: pcVar6 = param_2;
95: if (__s == (char *)0x0) {
96: local_40 = (char *)0x0;
97: pcVar1 = param_2;
98: goto LAB_0040380a;
99: }
100: iVar3 = strcmp(__s1,param_1);
101: if (iVar3 == 0) {
102: if (__s == param_2) {
103: return __s;
104: }
105: free(param_2);
106: return __s;
107: }
108: cVar2 = FUN_00402da0(__s1,param_1);
109: if (cVar2 == '\0') goto LAB_0040382c;
110: }
111: free(__s);
112: pcVar6 = param_2;
113: joined_r0x0040387b:
114: if (pcVar6 != (char *)0x0) {
115: free(pcVar6);
116: }
117: return pcVar9;
118: }
119: 
