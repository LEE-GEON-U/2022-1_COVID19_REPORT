#include "chart.h"

void COVID19_chart_jeonnam(void) {
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
		printf("\nCOVID-19 2022년 전라남도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report jeonnam1 = { chart_1[8][0], chart_1[8][1], chart_1[8][1] - chart_1[8][0] };
		struct report jeonnam2 = { chart_2[8][0], chart_2[8][1], chart_2[8][1] - chart_2[8][0] };
		struct report jeonnam3 = { chart_3[8][0], chart_3[8][1], chart_3[8][1] - chart_3[8][0] };
		struct report jeonnam4 = { chart_4[8][0], chart_4[8][1], chart_4[8][1] - chart_4[8][0] };
		struct report jeonnam5 = { chart_5[8][0], chart_5[8][1], chart_5[8][1] - chart_5[8][0] };
		struct report* pjeonnam1; struct report* pjeonnam2; struct report* pjeonnam3; struct report* pjeonnam4; struct report* pjeonnam5;
		pjeonnam1 = &jeonnam1; pjeonnam2 = &jeonnam2; pjeonnam3 = &jeonnam3; pjeonnam4 = &jeonnam4; pjeonnam5 = &jeonnam5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonnam1->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonnam1->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonnam1->after - pjeonnam1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonnam2->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonnam2->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonnam2->after - pjeonnam2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonnam3->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonnam3->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonnam3->after - pjeonnam3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonnam4->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonnam4->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonnam4->after - pjeonnam4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "전라남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 전라남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pjeonnam5->before);
			printf("\n- 월말 누적 확진자 = %d", pjeonnam5->after);
			printf("\n- 당월 신규 확진자 = %d", pjeonnam5->after - pjeonnam5->before);
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