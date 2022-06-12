/* [주석 1 : 과제 설명]
  컴퓨터프로그래밍 평가과제 (배점 25점)
  학과 : 컴퓨터공학부
  학번 : 202202342
  이름 : 이건우
  과제 주제 : 코로나바이러스감염증-19 2022년 국내 지역별 확진 현황
*/

#include "chart.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

FILE* fp;

int main(void) {
	int loop;
	int* p = &loop;
	int** q = &p;
	**q = 1;

	while (**q) {
		int num1;
		printf("\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
		printf("\nCOVID-19 2022년 국내 지역별 확진 현황 (2022.06.09. 00시 기준)");
		printf("\n1.  경기\n2.  서울\n3.  부산\n4.  경남\n5.  인천\n6.  경북\n7.  대구");
		printf("\n8.  충남\n9.  전남\n10. 전북\n11. 충북\n12. 강원\n13. 대전\n14. 광주");
		printf("\n15. 울산\n16. 제주\n17. 세종\n18. 프로그램 종료");
		printf("\n\n< 열람 기록은 History 파일에 기록되어 남을 수 있습니다. >");
		printf("\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
		printf("\n시도별 번호를 입력하시오 : ");
		scanf_s("%d", &num1);

		switch (num1) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeonggi();
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_seoul();
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_busan();
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeongnam();
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_incheon();
			break;
		case 6:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeongbuk();
			break;
		case 7:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_daegu();
			break;
		case 8:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_chungnam();
			break;
		case 9:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeonnam();
			break;
		case 10:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeonbuk();
			break;
		case 11:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_chungbuk();
			break;
		case 12:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_gangwon();
			break;
		case 13:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_daejeon();
			break;
		case 14:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_gwangju();
			break;
		case 15:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_ulsan();
			break;
		case 16:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeju();
			break;
		case 17:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n국내 지역 선택 : %d\n", num1);
			fclose(fp);
			COVID19_chart_sejong();
			break;
		case 18:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n프로그램을 종료합니다.");
			fclose(fp);
			**q = 0;
			break;
		default:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "잘못된 번호 입력\n");
			fclose(fp);
			printf("잘못된 번호입니다. 다시 입력해주십시오.\n");
			break;
		}
	}

	fopen_s(&fp, "history.txt", "a");
	fprintf(fp, "\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	fclose(fp);

	return 0;
}