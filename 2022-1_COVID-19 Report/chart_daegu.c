#include "chart.h"

void COVID19_chart_daegu(void) {
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
		printf("\nCOVID-19 2022년 대구광역시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report daegu1 = { chart_1[6][0], chart_1[6][1], chart_1[6][1] - chart_1[6][0] };
		struct report daegu2 = { chart_2[6][0], chart_2[6][1], chart_2[6][1] - chart_2[6][0] };
		struct report daegu3 = { chart_3[6][0], chart_3[6][1], chart_3[6][1] - chart_3[6][0] };
		struct report daegu4 = { chart_4[6][0], chart_4[6][1], chart_4[6][1] - chart_4[6][0] };
		struct report daegu5 = { chart_5[6][0], chart_5[6][1], chart_5[6][1] - chart_5[6][0] };
		struct report* pdaegu1; struct report* pdaegu2; struct report* pdaegu3; struct report* pdaegu4; struct report* pdaegu5;
		pdaegu1 = &daegu1; pdaegu2 = &daegu2; pdaegu3 = &daegu3; pdaegu4 = &daegu4; pdaegu5 = &daegu5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "대구광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 대구광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pdaegu1->before);
			printf("\n- 월말 누적 확진자 = %d", pdaegu1->after);
			printf("\n- 당월 신규 확진자 = %d", pdaegu1->after - pdaegu1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "대구광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 대구광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pdaegu2->before);
			printf("\n- 월말 누적 확진자 = %d", pdaegu2->after);
			printf("\n- 당월 신규 확진자 = %d", pdaegu2->after - pdaegu2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "대구광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 대구광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pdaegu3->before);
			printf("\n- 월말 누적 확진자 = %d", pdaegu3->after);
			printf("\n- 당월 신규 확진자 = %d", pdaegu3->after - pdaegu3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "대구광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 대구광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pdaegu4->before);
			printf("\n- 월말 누적 확진자 = %d", pdaegu4->after);
			printf("\n- 당월 신규 확진자 = %d", pdaegu4->after - pdaegu4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "대구광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 대구광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pdaegu5->before);
			printf("\n- 월말 누적 확진자 = %d", pdaegu5->after);
			printf("\n- 당월 신규 확진자 = %d", pdaegu5->after - pdaegu5->before);
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