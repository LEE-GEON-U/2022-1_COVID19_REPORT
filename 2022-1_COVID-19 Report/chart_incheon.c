#include "chart.h"

void COVID19_chart_incheon(void) {
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
		printf("\nCOVID-19 2022년 인천광역시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report incheon1 = { chart_1[4][0], chart_1[4][1], chart_1[4][1] - chart_1[4][0] };
		struct report incheon2 = { chart_2[4][0], chart_2[4][1], chart_2[4][1] - chart_2[4][0] };
		struct report incheon3 = { chart_3[4][0], chart_3[4][1], chart_3[4][1] - chart_3[4][0] };
		struct report incheon4 = { chart_4[4][0], chart_4[4][1], chart_4[4][1] - chart_4[4][0] };
		struct report incheon5 = { chart_5[4][0], chart_5[4][1], chart_5[4][1] - chart_5[4][0] };
		struct report* pincheon1; struct report* pincheon2; struct report* pincheon3; struct report* pincheon4; struct report* pincheon5;
		pincheon1 = &incheon1; pincheon2 = &incheon2; pincheon3 = &incheon3; pincheon4 = &incheon4; pincheon5 = &incheon5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "인천광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 인천광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pincheon1->before);
			printf("\n- 월말 누적 확진자 = %d", pincheon1->after);
			printf("\n- 당월 신규 확진자 = %d", pincheon1->after - pincheon1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "인천광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 인천광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pincheon2->before);
			printf("\n- 월말 누적 확진자 = %d", pincheon2->after);
			printf("\n- 당월 신규 확진자 = %d", pincheon2->after - pincheon2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "인천광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 인천광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pincheon3->before);
			printf("\n- 월말 누적 확진자 = %d", pincheon3->after);
			printf("\n- 당월 신규 확진자 = %d", pincheon3->after - pincheon3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "인천광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 인천광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pincheon4->before);
			printf("\n- 월말 누적 확진자 = %d", pincheon4->after);
			printf("\n- 당월 신규 확진자 = %d", pincheon4->after - pincheon4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "인천광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 인천광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pincheon5->before);
			printf("\n- 월말 누적 확진자 = %d", pincheon5->after);
			printf("\n- 당월 신규 확진자 = %d", pincheon5->after - pincheon5->before);
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