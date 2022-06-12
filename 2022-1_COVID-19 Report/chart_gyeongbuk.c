#include "chart.h"

void COVID19_chart_gyeongbuk(void) {
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
		printf("\nCOVID-19 2022년 경상북도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report gyeongbuk1 = { chart_1[5][0], chart_1[5][1], chart_1[5][1] - chart_1[5][0] };
		struct report gyeongbuk2 = { chart_2[5][0], chart_2[5][1], chart_2[5][1] - chart_2[5][0] };
		struct report gyeongbuk3 = { chart_3[5][0], chart_3[5][1], chart_3[5][1] - chart_3[5][0] };
		struct report gyeongbuk4 = { chart_4[5][0], chart_4[5][1], chart_4[5][1] - chart_4[5][0] };
		struct report gyeongbuk5 = { chart_5[5][0], chart_5[5][1], chart_5[5][1] - chart_5[5][0] };
		struct report* pgyeongbuk1; struct report* pgyeongbuk2; struct report* pgyeongbuk3; struct report* pgyeongbuk4; struct report* pgyeongbuk5;
		pgyeongbuk1 = &gyeongbuk1; pgyeongbuk2 = &gyeongbuk2; pgyeongbuk3 = &gyeongbuk3; pgyeongbuk4 = &gyeongbuk4; pgyeongbuk5 = &gyeongbuk5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongbuk1->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongbuk1->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongbuk1->after - pgyeongbuk1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongbuk2->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongbuk2->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongbuk2->after - pgyeongbuk2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongbuk3->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongbuk3->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongbuk3->after - pgyeongbuk3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongbuk4->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongbuk4->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongbuk4->after - pgyeongbuk4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongbuk5->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongbuk5->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongbuk5->after - pgyeongbuk5->before);
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