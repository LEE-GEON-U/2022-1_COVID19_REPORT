#include "chart.h"

void COVID19_chart_jeju(void) {
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
		printf("\nCOVID-19 2022년 제주특별자치도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report jeju1 = { chart_1[15][0], chart_1[15][1], chart_1[15][1] - chart_1[15][0] };
		struct report jeju2 = { chart_2[15][0], chart_2[15][1], chart_2[15][1] - chart_2[15][0] };
		struct report jeju3 = { chart_3[15][0], chart_3[15][1], chart_3[15][1] - chart_3[15][0] };
		struct report jeju4 = { chart_4[15][0], chart_4[15][1], chart_4[15][1] - chart_4[15][0] };
		struct report jeju5 = { chart_5[15][0], chart_5[15][1], chart_5[15][1] - chart_5[15][0] };
		struct report* pjeju1; struct report* pjeju2; struct report* pjeju3; struct report* pjeju4; struct report* pjeju5;
		pjeju1 = &jeju1; pjeju2 = &jeju2; pjeju3 = &jeju3; pjeju4 = &jeju4; pjeju5 = &jeju5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "제주특별자치도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 제주특별자치도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeju1->before);
			printf("\n- 월말 누적 확진자 = %d", pjeju1->after);
			printf("\n- 당월 신규 확진자 = %d", pjeju1->after - pjeju1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "제주특별자치도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 제주특별자치도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeju2->before);
			printf("\n- 월말 누적 확진자 = %d", pjeju2->after);
			printf("\n- 당월 신규 확진자 = %d", pjeju2->after - pjeju2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "제주특별자치도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 제주특별자치도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeju3->before);
			printf("\n- 월말 누적 확진자 = %d", pjeju3->after);
			printf("\n- 당월 신규 확진자 = %d", pjeju3->after - pjeju3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "제주특별자치도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 제주특별자치도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeju4->before);
			printf("\n- 월말 누적 확진자 = %d", pjeju4->after);
			printf("\n- 당월 신규 확진자 = %d", pjeju4->after - pjeju4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "제주특별자치도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 제주특별자치도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeju5->before);
			printf("\n- 월말 누적 확진자 = %d", pjeju5->after);
			printf("\n- 당월 신규 확진자 = %d", pjeju5->after - pjeju5->before);
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