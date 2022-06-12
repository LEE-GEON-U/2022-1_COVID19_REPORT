#include "chart.h"

void COVID19_chart_gyeongnam(void) {
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
		printf("\nCOVID-19 2022년 경상남도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report gyeongnam1 = { chart_1[3][0], chart_1[3][1], chart_1[3][1] - chart_1[3][0] };
		struct report gyeongnam2 = { chart_2[3][0], chart_2[3][1], chart_2[3][1] - chart_2[3][0] };
		struct report gyeongnam3 = { chart_3[3][0], chart_3[3][1], chart_3[3][1] - chart_3[3][0] };
		struct report gyeongnam4 = { chart_4[3][0], chart_4[3][1], chart_4[3][1] - chart_4[3][0] };
		struct report gyeongnam5 = { chart_5[3][0], chart_5[3][1], chart_5[3][1] - chart_5[3][0] };
		struct report* pgyeongnam1; struct report* pgyeongnam2; struct report* pgyeongnam3; struct report* pgyeongnam4; struct report* pgyeongnam5;
		pgyeongnam1 = &gyeongnam1; pgyeongnam2 = &gyeongnam2; pgyeongnam3 = &gyeongnam3; pgyeongnam4 = &gyeongnam4; pgyeongnam5 = &gyeongnam5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongnam1->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongnam1->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongnam1->after - pgyeongnam1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongnam2->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongnam2->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongnam2->after - pgyeongnam2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongnam3->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongnam3->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongnam3->after - pgyeongnam3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongnam4->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongnam4->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongnam4->after - pgyeongnam4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경상남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경상남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeongnam5->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeongnam5->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeongnam5->after - pgyeongnam5->before);
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