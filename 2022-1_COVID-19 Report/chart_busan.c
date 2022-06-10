#include "chart.h"

void COVID19_chart_busan(void) {
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
		printf("\nCOVID-19 2022�� �λ걤���� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report busan1 = { chart_1[2][0], chart_1[2][1], chart_1[2][1] - chart_1[2][0] };
		struct report busan2 = { chart_2[2][0], chart_2[2][1], chart_2[2][1] - chart_2[2][0] };
		struct report busan3 = { chart_3[2][0], chart_3[2][1], chart_3[2][1] - chart_3[2][0] };
		struct report busan4 = { chart_4[2][0], chart_4[2][1], chart_4[2][1] - chart_4[2][0] };
		struct report busan5 = { chart_5[2][0], chart_5[2][1], chart_5[2][1] - chart_5[2][0] };
		struct report* pbusan1; struct report* pbusan2; struct report* pbusan3; struct report* pbusan4; struct report* pbusan5;
		pbusan1 = &busan1; pbusan2 = &busan2; pbusan3 = &busan3; pbusan4 = &busan4; pbusan5 = &busan5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�λ걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �λ걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pbusan1->after - pbusan1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�λ걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �λ걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pbusan2->after - pbusan2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�λ걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �λ걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pbusan3->after - pbusan3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�λ걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �λ걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pbusan4->after - pbusan4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�λ걤���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �λ걤���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pbusan5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pbusan5->after - pbusan5->before);
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