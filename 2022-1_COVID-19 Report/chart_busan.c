#include "chart.h"

void COVID19_chart_busan(void) {
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
		printf("\nCOVID-19 2022년 부산광역시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report busan1 = { chart_1[2][0], chart_1[2][1], chart_1[2][1] - chart_1[2][0] };
		struct report busan2 = { chart_2[2][0], chart_2[2][1], chart_2[2][1] - chart_2[2][0] };
		struct report busan3 = { chart_3[2][0], chart_3[2][1], chart_3[2][1] - chart_3[2][0] };
		struct report busan4 = { chart_4[2][0], chart_4[2][1], chart_4[2][1] - chart_4[2][0] };
		struct report busan5 = { chart_5[2][0], chart_5[2][1], chart_5[2][1] - chart_5[2][0] };
		struct report* pbusan1; struct report* pbusan2; struct report* pbusan3; struct report* pbusan4; struct report* pbusan5;
		pbusan1 = &busan1; pbusan2 = &busan2; pbusan3 = &busan3; pbusan4 = &busan4; pbusan5 = &busan5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "부산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 부산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pbusan1->before);
			printf("\n- 월말 누적 확진자 = %d", pbusan1->after);
			printf("\n- 당월 신규 확진자 = %d", pbusan1->after - pbusan1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "부산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 부산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pbusan2->before);
			printf("\n- 월말 누적 확진자 = %d", pbusan2->after);
			printf("\n- 당월 신규 확진자 = %d", pbusan2->after - pbusan2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "부산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 부산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pbusan3->before);
			printf("\n- 월말 누적 확진자 = %d", pbusan3->after);
			printf("\n- 당월 신규 확진자 = %d", pbusan3->after - pbusan3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "부산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 부산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pbusan4->before);
			printf("\n- 월말 누적 확진자 = %d", pbusan4->after);
			printf("\n- 당월 신규 확진자 = %d", pbusan4->after - pbusan4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "부산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 부산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pbusan5->before);
			printf("\n- 월말 누적 확진자 = %d", pbusan5->after);
			printf("\n- 당월 신규 확진자 = %d", pbusan5->after - pbusan5->before);
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