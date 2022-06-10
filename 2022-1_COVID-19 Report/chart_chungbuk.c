#include "chart.h"

void COVID19_chart_chungbuk(void) {
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
		printf("\nCOVID-19 2022년 충청북도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report chungbuk1 = { chart_1[10][0], chart_1[10][1], chart_1[10][1] - chart_1[10][0] };
		struct report chungbuk2 = { chart_2[10][0], chart_2[10][1], chart_2[10][1] - chart_2[10][0] };
		struct report chungbuk3 = { chart_3[10][0], chart_3[10][1], chart_3[10][1] - chart_3[10][0] };
		struct report chungbuk4 = { chart_4[10][0], chart_4[10][1], chart_4[10][1] - chart_4[10][0] };
		struct report chungbuk5 = { chart_5[10][0], chart_5[10][1], chart_5[10][1] - chart_5[10][0] };
		struct report* pchungbuk1; struct report* pchungbuk2; struct report* pchungbuk3; struct report* pchungbuk4; struct report* pchungbuk5;
		pchungbuk1 = &chungbuk1; pchungbuk2 = &chungbuk2; pchungbuk3 = &chungbuk3; pchungbuk4 = &chungbuk4; pchungbuk5 = &chungbuk5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungbuk1->before);
			printf("\n- 월말 누적 확진자 = %d", pchungbuk1->after);
			printf("\n- 당월 신규 확진자 = %d", pchungbuk1->after - pchungbuk1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungbuk2->before);
			printf("\n- 월말 누적 확진자 = %d", pchungbuk2->after);
			printf("\n- 당월 신규 확진자 = %d", pchungbuk2->after - pchungbuk2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungbuk3->before);
			printf("\n- 월말 누적 확진자 = %d", pchungbuk3->after);
			printf("\n- 당월 신규 확진자 = %d", pchungbuk3->after - pchungbuk3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungbuk4->before);
			printf("\n- 월말 누적 확진자 = %d", pchungbuk4->after);
			printf("\n- 당월 신규 확진자 = %d", pchungbuk4->after - pchungbuk4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungbuk5->before);
			printf("\n- 월말 누적 확진자 = %d", pchungbuk5->after);
			printf("\n- 당월 신규 확진자 = %d", pchungbuk5->after - pchungbuk5->before);
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