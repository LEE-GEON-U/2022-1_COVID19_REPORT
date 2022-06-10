#include "chart.h"

void COVID19_chart_chungbuk(void) {
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
		printf("\nCOVID-19 2022�� ��û�ϵ� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report chungbuk1 = { chart_1[10][0], chart_1[10][1], chart_1[10][1] - chart_1[10][0] };
		struct report chungbuk2 = { chart_2[10][0], chart_2[10][1], chart_2[10][1] - chart_2[10][0] };
		struct report chungbuk3 = { chart_3[10][0], chart_3[10][1], chart_3[10][1] - chart_3[10][0] };
		struct report chungbuk4 = { chart_4[10][0], chart_4[10][1], chart_4[10][1] - chart_4[10][0] };
		struct report chungbuk5 = { chart_5[10][0], chart_5[10][1], chart_5[10][1] - chart_5[10][0] };
		struct report* pchungbuk1; struct report* pchungbuk2; struct report* pchungbuk3; struct report* pchungbuk4; struct report* pchungbuk5;
		pchungbuk1 = &chungbuk1; pchungbuk2 = &chungbuk2; pchungbuk3 = &chungbuk3; pchungbuk4 = &chungbuk4; pchungbuk5 = &chungbuk5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û�ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û�ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungbuk1->after - pchungbuk1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û�ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û�ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungbuk2->after - pchungbuk2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û�ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û�ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungbuk3->after - pchungbuk3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û�ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û�ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungbuk4->after - pchungbuk4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û�ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û�ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungbuk5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungbuk5->after - pchungbuk5->before);
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