#include "chart.h"

void COVID19_chart_ulsan(void) {
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
		printf("\nCOVID-19 2022년 울산광역시 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report ulsan1 = { chart_1[14][0], chart_1[14][1], chart_1[14][1] - chart_1[14][0] };
		struct report ulsan2 = { chart_2[14][0], chart_2[14][1], chart_2[14][1] - chart_2[14][0] };
		struct report ulsan3 = { chart_3[14][0], chart_3[14][1], chart_3[14][1] - chart_3[14][0] };
		struct report ulsan4 = { chart_4[14][0], chart_4[14][1], chart_4[14][1] - chart_4[14][0] };
		struct report ulsan5 = { chart_5[14][0], chart_5[14][1], chart_5[14][1] - chart_5[14][0] };
		struct report* pulsan1; struct report* pulsan2; struct report* pulsan3; struct report* pulsan4; struct report* pulsan5;
		pulsan1 = &ulsan1; pulsan2 = &ulsan2; pulsan3 = &ulsan3; pulsan4 = &ulsan4; pulsan5 = &ulsan5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "울산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 울산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pulsan1->before);
			printf("\n- 월말 누적 확진자 = %d", pulsan1->after);
			printf("\n- 당월 신규 확진자 = %d", pulsan1->after - pulsan1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "울산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 울산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pulsan2->before);
			printf("\n- 월말 누적 확진자 = %d", pulsan2->after);
			printf("\n- 당월 신규 확진자 = %d", pulsan2->after - pulsan2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "울산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 울산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pulsan3->before);
			printf("\n- 월말 누적 확진자 = %d", pulsan3->after);
			printf("\n- 당월 신규 확진자 = %d", pulsan3->after - pulsan3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "울산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 울산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pulsan4->before);
			printf("\n- 월말 누적 확진자 = %d", pulsan4->after);
			printf("\n- 당월 신규 확진자 = %d", pulsan4->after - pulsan4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "울산광역시 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 울산광역시 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pulsan5->before);
			printf("\n- 월말 누적 확진자 = %d", pulsan5->after);
			printf("\n- 당월 신규 확진자 = %d", pulsan5->after - pulsan5->before);
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