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
		printf("\n\n���������������������");
		printf("\nCOVID-19 2022�� ��걤���� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
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
			fprintf(fp, "��걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pulsan1->after - pulsan1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pulsan2->after - pulsan2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pulsan3->after - pulsan3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pulsan4->after - pulsan4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pulsan5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pulsan5->after - pulsan5->before);
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