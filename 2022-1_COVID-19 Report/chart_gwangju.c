#include "chart.h"

void COVID19_chart_gwangju(void) {
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
		printf("\nCOVID-19 2022년 광주광역시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report gwangju1 = { chart_1[13][0], chart_1[13][1], chart_1[13][1] - chart_1[13][0] };
		struct report gwangju2 = { chart_2[13][0], chart_2[13][1], chart_2[13][1] - chart_2[13][0] };
		struct report gwangju3 = { chart_3[13][0], chart_3[13][1], chart_3[13][1] - chart_3[13][0] };
		struct report gwangju4 = { chart_4[13][0], chart_4[13][1], chart_4[13][1] - chart_4[13][0] };
		struct report gwangju5 = { chart_5[13][0], chart_5[13][1], chart_5[13][1] - chart_5[13][0] };
		struct report* pgwangju1; struct report* pgwangju2; struct report* pgwangju3; struct report* pgwangju4; struct report* pgwangju5;
		pgwangju1 = &gwangju1; pgwangju2 = &gwangju2; pgwangju3 = &gwangju3; pgwangju4 = &gwangju4; pgwangju5 = &gwangju5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "광주광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 광주광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgwangju1->before);
			printf("\n- 월말 누적 확진자 = %d", pgwangju1->after);
			printf("\n- 당월 신규 확진자 = %d", pgwangju1->after - pgwangju1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "광주광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 광주광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgwangju2->before);
			printf("\n- 월말 누적 확진자 = %d", pgwangju2->after);
			printf("\n- 당월 신규 확진자 = %d", pgwangju2->after - pgwangju2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "광주광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 광주광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgwangju3->before);
			printf("\n- 월말 누적 확진자 = %d", pgwangju3->after);
			printf("\n- 당월 신규 확진자 = %d", pgwangju3->after - pgwangju3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "광주광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 광주광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgwangju4->before);
			printf("\n- 월말 누적 확진자 = %d", pgwangju4->after);
			printf("\n- 당월 신규 확진자 = %d", pgwangju4->after - pgwangju4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "광주광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 광주광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pgwangju5->before);
			printf("\n- 월말 누적 확진자 = %d", pgwangju5->after);
			printf("\n- 당월 신규 확진자 = %d", pgwangju5->after - pgwangju5->before);
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