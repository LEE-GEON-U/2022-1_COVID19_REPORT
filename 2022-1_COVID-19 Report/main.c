/* [�ּ� 1 : ���� ����]
  ��ǻ�����α׷��� �򰡰��� (���� 25��)
  �а� : ��ǻ�Ͱ��к�
  �й� : 202202342
  �̸� : �̰ǿ�
  ���� ���� : �ڷγ����̷���������-19 2022�� ���� ������ Ȯ�� ��Ȳ
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
		printf("\n��������������������������������");
		printf("\nCOVID-19 2022�� ���� ������ Ȯ�� ��Ȳ (2022.06.09. 00�� ����)");
		printf("\n1.  ���\n2.  ����\n3.  �λ�\n4.  �泲\n5.  ��õ\n6.  ���\n7.  �뱸");
		printf("\n8.  �泲\n9.  ����\n10. ����\n11. ���\n12. ����\n13. ����\n14. ����");
		printf("\n15. ���\n16. ����\n17. ����\n18. ���α׷� ����");
		printf("\n\n< ���� ����� History ���Ͽ� ��ϵǾ� ���� �� �ֽ��ϴ�. >");
		printf("\n��������������������������������");
		printf("\n�õ��� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num1);

		switch (num1) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeonggi();
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_seoul();
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_busan();
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeongnam();
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_incheon();
			break;
		case 6:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_gyeongbuk();
			break;
		case 7:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_daegu();
			break;
		case 8:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_chungnam();
			break;
		case 9:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeonnam();
			break;
		case 10:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeonbuk();
			break;
		case 11:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_chungbuk();
			break;
		case 12:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_gangwon();
			break;
		case 13:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_daejeon();
			break;
		case 14:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_gwangju();
			break;
		case 15:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_ulsan();
			break;
		case 16:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_jeju();
			break;
		case 17:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���� ���� ���� : %d\n", num1);
			fclose(fp);
			COVID19_chart_sejong();
			break;
		case 18:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "\n���α׷��� �����մϴ�.");
			fclose(fp);
			**q = 0;
			break;
		default:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�߸��� ��ȣ �Է�\n");
			fclose(fp);
			printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է����ֽʽÿ�.\n");
			break;
		}
	}

	fopen_s(&fp, "history.txt", "a");
	fprintf(fp, "\n\n��������������������������������");
	fclose(fp);

	return 0;
}