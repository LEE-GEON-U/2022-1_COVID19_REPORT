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
		printf("\n\n���������������������");
		printf("\nCOVID-19 2022�� ���󳲵� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
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
			fprintf(fp, "���󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonnam1->after - pjeonnam1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonnam2->after - pjeonnam2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonnam3->after - pjeonnam3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonnam4->after - pjeonnam4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonnam5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonnam5->after - pjeonnam5->before);
			printf("\n���������������������");
			break;
		case 6:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�ڷΰ���\n");
			fclose(fp);
			loop = 0;
			break;
		default:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�߸��� ��ȣ �Է�\n");
			fclose(fp);
			printf("\n�߸��� ��ȣ�Դϴ�. �ٽ� �Է����ֽʽÿ�.");
			break;
		}
	}
}