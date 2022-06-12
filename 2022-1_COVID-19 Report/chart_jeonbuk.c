#include "chart.h"

void COVID19_chart_jeonbuk(void) {
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
		printf("\nCOVID-19 2022년 전라북도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report jeonbuk1 = { chart_1[9][0], chart_1[9][1], chart_1[9][1] - chart_1[9][0] };
		struct report jeonbuk2 = { chart_2[9][0], chart_2[9][1], chart_2[9][1] - chart_2[9][0] };
		struct report jeonbuk3 = { chart_3[9][0], chart_3[9][1], chart_3[9][1] - chart_3[9][0] };
		struct report jeonbuk4 = { chart_4[9][0], chart_4[9][1], chart_4[9][1] - chart_4[9][0] };
		struct report jeonbuk5 = { chart_5[9][0], chart_5[9][1], chart_5[9][1] - chart_5[9][0] };
		struct report* pjeonbuk1; struct report* pjeonbuk2; struct report* pjeonbuk3; struct report* pjeonbuk4; struct report* pjeonbuk5;
		pjeonbuk1 = &jeonbuk1; pjeonbuk2 = &jeonbuk2; pjeonbuk3 = &jeonbuk3; pjeonbuk4 = &jeonbuk4; pjeonbuk5 = &jeonbuk5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonbuk1->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonbuk1->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonbuk1->after - pjeonbuk1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonbuk2->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonbuk2->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonbuk2->after - pjeonbuk2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonbuk3->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonbuk3->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonbuk3->after - pjeonbuk3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonbuk4->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonbuk4->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonbuk4->after - pjeonbuk4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라북도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라북도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonbuk5->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonbuk5->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonbuk5->after - pjeonbuk5->before);
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