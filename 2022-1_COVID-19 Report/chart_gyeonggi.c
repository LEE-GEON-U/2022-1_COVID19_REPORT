#include "chart.h"

void COVID19_chart_gyeonggi(void) {
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
		printf("\nCOVID-19 2022년 경기도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report gyeonggi1 = { chart_1[0][0], chart_1[0][1], chart_1[0][1] - chart_1[0][0] };
		struct report gyeonggi2 = { chart_2[0][0], chart_2[0][1], chart_2[0][1] - chart_2[0][0] };
		struct report gyeonggi3 = { chart_3[0][0], chart_3[0][1], chart_3[0][1] - chart_3[0][0] };
		struct report gyeonggi4 = { chart_4[0][0], chart_4[0][1], chart_4[0][1] - chart_4[0][0] };
		struct report gyeonggi5 = { chart_5[0][0], chart_5[0][1], chart_5[0][1] - chart_5[0][0] };
		struct report* pgyeonggi1; struct report* pgyeonggi2; struct report* pgyeonggi3; struct report* pgyeonggi4; struct report* pgyeonggi5;
		pgyeonggi1 = &gyeonggi1; pgyeonggi2 = &gyeonggi2; pgyeonggi3 = &gyeonggi3; pgyeonggi4 = &gyeonggi4; pgyeonggi5 = &gyeonggi5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경기도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경기도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeonggi1->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeonggi1->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeonggi1->after - pgyeonggi1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경기도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경기도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeonggi2->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeonggi2->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeonggi2->after - pgyeonggi2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경기도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경기도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeonggi3->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeonggi3->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeonggi3->after - pgyeonggi3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경기도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경기도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeonggi4->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeonggi4->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeonggi4->after - pgyeonggi4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "경기도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 경기도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgyeonggi5->before);
			printf("\n- 월말 누적 확진자 = %d", pgyeonggi5->after);
			printf("\n- 당월 신규 확진자 = %d", pgyeonggi5->after - pgyeonggi5->before);
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