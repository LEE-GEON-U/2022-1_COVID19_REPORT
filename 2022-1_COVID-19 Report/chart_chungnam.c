#include "chart.h"

void COVID19_chart_chungnam(void) {
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
		printf("\nCOVID-19 2022년 충청남도 월별 확진 현황");
		printf("\n1. 1월\n2. 2월\n3. 3월\n4. 4월\n5. 5월\n6. 뒤로가기");
		printf("\n■■■■■■■■■■■■■■■■■■■■");
		printf("\n월별 번호를 입력하시오 : ");
		scanf_s("%d", &num2);

		struct report chungnam1 = { chart_1[7][0], chart_1[7][1], chart_1[7][1] - chart_1[7][0] };
		struct report chungnam2 = { chart_2[7][0], chart_2[7][1], chart_2[7][1] - chart_2[7][0] };
		struct report chungnam3 = { chart_3[7][0], chart_3[7][1], chart_3[7][1] - chart_3[7][0] };
		struct report chungnam4 = { chart_4[7][0], chart_4[7][1], chart_4[7][1] - chart_4[7][0] };
		struct report chungnam5 = { chart_5[7][0], chart_5[7][1], chart_5[7][1] - chart_5[7][0] };
		struct report* pchungnam1; struct report* pchungnam2; struct report* pchungnam3; struct report* pchungnam4; struct report* pchungnam5;
		pchungnam1 = &chungnam1; pchungnam2 = &chungnam2; pchungnam3 = &chungnam3; pchungnam4 = &chungnam4; pchungnam5 = &chungnam5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungnam1->before);
			printf("\n- 월말 누적 확진자 = %d", pchungnam1->after);
			printf("\n- 당월 신규 확진자 = %d", pchungnam1->after - pchungnam1->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungnam2->before);
			printf("\n- 월말 누적 확진자 = %d", pchungnam2->after);
			printf("\n- 당월 신규 확진자 = %d", pchungnam2->after - pchungnam2->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungnam3->before);
			printf("\n- 월말 누적 확진자 = %d", pchungnam3->after);
			printf("\n- 당월 신규 확진자 = %d", pchungnam3->after - pchungnam3->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungnam4->before);
			printf("\n- 월말 누적 확진자 = %d", pchungnam4->after);
			printf("\n- 당월 신규 확진자 = %d", pchungnam4->after - pchungnam4->before);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "충청남도 시기 선택 : %d월\n", num2);
			fclose(fp);
			printf("\n■■■■■■■■■■■■■■■■■■■■");
			printf("\n2022년 %d월 충청남도 코로나 누적 확진 현황", num2);
			printf("\n- 월초 누적 확진자 = %d", pchungnam5->before);
			printf("\n- 월말 누적 확진자 = %d", pchungnam5->after);
			printf("\n- 당월 신규 확진자 = %d", pchungnam5->after - pchungnam5->before);
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