#include "chart.h"

void COVID19_chart_gangwon(void) {
	int loop = 1;
	struct report {
		int before;
		int after;
		int new;
	};

	while (loop) {
		int num2;
		FILE* fp;
		printf("\n\n■■■■■■■■■■■■■■■■■■■■");
		printf("\nCOVID-19 2022년 강원도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report gangwon1 = { chart_1[11][0], chart_1[11][1], chart_1[11][1] - chart_1[11][0] };
		struct report gangwon2 = { chart_2[11][0], chart_2[11][1], chart_2[11][1] - chart_2[11][0] };
		struct report gangwon3 = { chart_3[11][0], chart_3[11][1], chart_3[11][1] - chart_3[11][0] };
		struct report gangwon4 = { chart_4[11][0], chart_4[11][1], chart_4[11][1] - chart_4[11][0] };
		struct report gangwon5 = { chart_5[11][0], chart_5[11][1], chart_5[11][1] - chart_5[11][0] };
		struct report* pgangwon1; struct report* pgangwon2; struct report* pgangwon3; struct report* pgangwon4; struct report* pgangwon5;
		pgangwon1 = &gangwon1; pgangwon2 = &gangwon2; pgangwon3 = &gangwon3; pgangwon4 = &gangwon4; pgangwon5 = &gangwon5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "강원도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 강원도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgangwon1->before);
			printf("\n- 월말 누적 확진자 = %d", pgangwon1->after);
			printf("\n- 당월 신규 확진자 = %d", pgangwon1->after - pgangwon1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "강원도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 강원도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgangwon2->before);
			printf("\n- 월말 누적 확진자 = %d", pgangwon2->after);
			printf("\n- 당월 신규 확진자 = %d", pgangwon2->after - pgangwon2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "강원도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 강원도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgangwon3->before);
			printf("\n- 월말 누적 확진자 = %d", pgangwon3->after);
			printf("\n- 당월 신규 확진자 = %d", pgangwon3->after - pgangwon3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "강원도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 강원도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgangwon4->before);
			printf("\n- 월말 누적 확진자 = %d", pgangwon4->after);
			printf("\n- 당월 신규 확진자 = %d", pgangwon4->after - pgangwon4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "강원도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 강원도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgangwon5->before);
			printf("\n- 월말 누적 확진자 = %d", pgangwon5->after);
			printf("\n- 당월 신규 확진자 = %d", pgangwon5->after - pgangwon5->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 6:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "뒤로가기\n");
			fclose(fp);
			loop = 0;
			break;
		default:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "잘못된 번호 입력\n");
			fclose(fp);
			printf("\n잘못된 번호입니다. 다시 입력해주십시오.");
			break;
		}
	}
}