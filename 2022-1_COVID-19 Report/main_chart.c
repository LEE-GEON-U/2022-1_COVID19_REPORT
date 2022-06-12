#include "chart.h"

/*
[ 행 ]	
0. 경기	/ 1. 서울 / 2. 부산 / 3. 경남 / 4. 인천
5. 경북 / 6. 대구 / 7. 충남 / 8. 전남 / 9. 전북
10. 충북 / 11. 강원 / 12. 대전 / 13. 광주 / 14. 울산
15. 제주 / 16. 세종

[ 열 ]
0. 월초 누적 확진자 / 1. 월말 누적 확진자
*/

int chart_1[17][2] = {
	{187754, 259108},
	{226698, 277325},
	{25287, 34435},
	{20840, 28299},
	{36962, 51656},
	{15431, 21774},
	{23249, 33063},
	{18233, 24972},
	{6126, 11029},
	{9653, 14942},
	{11602, 15286},
	{12464, 15980},
	{12315, 16725},
	{8118, 15008},
	{6923, 9037},
	{4661, 5422},
	{2158, 2986}
};

int chart_2[17][2] = {
	{264645, 940703},
	{281456, 776144},
	{35414, 192559},
	{29156, 140653},
	{53037, 221842},
	{22393, 98170},
	{34030, 131556},
	{25700, 102845},
	{11440, 60167},
	{15526, 76896},
	{15696, 68506},
	{16234, 60885},
	{17187, 78475},
	{15508, 78234},
	{9291, 49618},
	{5508, 29696},
	{3094, 17726}
};

int chart_3[17][2] = {
	{979916, 3637764},
	{804029, 2759294},
	{203763, 890734},
	{148684, 784309},
	{230798, 816626},
	{102838, 494158},
	{136938, 523883},
	{107698, 478287},
	{63450, 371620},
	{80834, 394784},
	{72008, 370985},
	{64362, 334151},
	{82149, 343696},
	{83040, 359985},
	{52562, 266917},
	{31969, 164289},
	{18602, 93479}
};

int chart_4[17][2] = {
	{3713377, 4720342},
	{2810973, 3481581},
	{902585, 1051615},
	{801564, 1032443},
	{831419, 1032462},
	{507130, 714183},
	{535262, 709132},
	{491428, 673506},
	{383445, 556484},
	{405421, 561480},
	{381142, 521774},
	{343213, 480465},
	{351789, 480697},
	{369269, 502843},
	{272729, 354778},
	{168162, 222409},
	{96207, 130675}
};

int chart_5[17][2] = {
	{4728917, 4924651},
	{3487043, 3616699},
	{1053250, 1092438},
	{1034929, 1088428},
	{1034222, 1072110},
	{716854, 775325},
	{711167, 758019},
	{675327, 712805},
	{558446, 593830},
	{563222, 597904},
	{523366, 553311},
	{481866, 514517},
	{482034, 510037},
	{504143, 531536},
	{355828, 377545},
	{222986, 234923},
	{131035, 138397}
};
