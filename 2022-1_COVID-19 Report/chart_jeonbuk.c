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
		printf("\n\n���������������������");
		printf("\nCOVID-19 2022�� ����ϵ� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
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
			fprintf(fp, "����ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonbuk1->after - pjeonbuk1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonbuk2->after - pjeonbuk2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonbuk3->after - pjeonbuk3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonbuk4->after - pjeonbuk4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeonbuk5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeonbuk5->after - pjeonbuk5->before);
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