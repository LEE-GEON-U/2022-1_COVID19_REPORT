#include "chart.h"

void COVID19_chart_sejong(void) {
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
		printf("\nCOVID-19 2022년 세종특별자치시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report sejong1 = { chart_1[16][0], chart_1[16][1], chart_1[16][1] - chart_1[16][0] };
		struct report sejong2 = { chart_2[16][0], chart_2[16][1], chart_2[16][1] - chart_2[16][0] };
		struct report sejong3 = { chart_3[16][0], chart_3[16][1], chart_3[16][1] - chart_3[16][0] };
		struct report sejong4 = { chart_4[16][0], chart_4[16][1], chart_4[16][1] - chart_4[16][0] };
		struct report sejong5 = { chart_5[16][0], chart_5[16][1], chart_5[16][1] - chart_5[16][0] };
		struct report* psejong1; struct report* psejong2; struct report* psejong3; struct report* psejong4; struct report* psejong5;
		psejong1 = &sejong1; psejong2 = &sejong2; psejong3 = &sejong3; psejong4 = &sejong4; psejong5 = &sejong5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "세종특별자치시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 세종특별자치시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", psejong1->before);
			printf("\n- 월말 누적 확진자 = %d", psejong1->after);
			printf("\n- 당월 신규 확진자 = %d", psejong1->after - psejong1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "세종특별자치시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 세종특별자치시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", psejong2->before);
			printf("\n- 월말 누적 확진자 = %d", psejong2->after);
			printf("\n- 당월 신규 확진자 = %d", psejong2->after - psejong2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "세종특별자치시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 세종특별자치시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", psejong3->before);
			printf("\n- 월말 누적 확진자 = %d", psejong3->after);
			printf("\n- 당월 신규 확진자 = %d", psejong3->after - psejong3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "세종특별자치시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 세종특별자치시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", psejong4->before);
			printf("\n- 월말 누적 확진자 = %d", psejong4->after);
			printf("\n- 당월 신규 확진자 = %d", psejong4->after - psejong4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "세종특별자치시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 세종특별자치시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", psejong5->before);
			printf("\n- 월말 누적 확진자 = %d", psejong5->after);
			printf("\n- 당월 신규 확진자 = %d", psejong5->after - psejong5->before);
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