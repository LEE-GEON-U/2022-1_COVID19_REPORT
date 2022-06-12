#include "chart.h"

void COVID19_chart_seoul(void) {
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
		printf("\nCOVID-19 2022년 서울특별시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report seoul1 = { chart_1[1][0], chart_1[1][1], chart_1[1][1] - chart_1[1][0] };
		struct report seoul2 = { chart_2[1][0], chart_2[1][1], chart_2[1][1] - chart_2[1][0] };
		struct report seoul3 = { chart_3[1][0], chart_3[1][1], chart_3[1][1] - chart_3[1][0] };
		struct report seoul4 = { chart_4[1][0], chart_4[1][1], chart_4[1][1] - chart_4[1][0] };
		struct report seoul5 = { chart_5[1][0], chart_5[1][1], chart_5[1][1] - chart_5[1][0] };
		struct report* pseoul1; struct report* pseoul2; struct report* pseoul3; struct report* pseoul4; struct report* pseoul5;
		pseoul1 = &seoul1; pseoul2 = &seoul2; pseoul3 = &seoul3; pseoul4 = &seoul4; pseoul5 = &seoul5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "서울특별시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 서울특별시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pseoul1->before);
			printf("\n- 월말 누적 확진자 = %d", pseoul1->after);
			printf("\n- 당월 신규 확진자 = %d", pseoul1->after - pseoul1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "서울특별시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 서울특별시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pseoul2->before);
			printf("\n- 월말 누적 확진자 = %d", pseoul2->after);
			printf("\n- 당월 신규 확진자 = %d", pseoul2->after - pseoul2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "서울특별시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 서울특별시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pseoul3->before);
			printf("\n- 월말 누적 확진자 = %d", pseoul3->after);
			printf("\n- 당월 신규 확진자 = %d", pseoul3->after - pseoul3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "서울특별시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 서울특별시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pseoul4->before);
			printf("\n- 월말 누적 확진자 = %d", pseoul4->after);
			printf("\n- 당월 신규 확진자 = %d", pseoul4->after - pseoul4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "서울특별시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 서울특별시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pseoul5->before);
			printf("\n- 월말 누적 확진자 = %d", pseoul5->after);
			printf("\n- 당월 신규 확진자 = %d", pseoul5->after - pseoul5->before);
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