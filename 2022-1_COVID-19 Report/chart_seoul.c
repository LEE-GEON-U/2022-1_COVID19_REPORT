#include "chart.h"

void COVID19_chart_seoul(void) {
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
		printf("\nCOVID-19 2022�� ����Ư���� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report seoul1 = { chart_1[1][0], chart_1[1][1], chart_1[1][1] - chart_1[1][0] };
		struct report seoul2 = { chart_2[1][0], chart_2[1][1], chart_2[1][1] - chart_2[1][0] };
		struct report seoul3 = { chart_3[1][0], chart_3[1][1], chart_3[1][1] - chart_3[1][0] };
		struct report seoul4 = { chart_4[1][0], chart_4[1][1], chart_4[1][1] - chart_4[1][0] };
		struct report seoul5 = { chart_5[1][0], chart_5[1][1], chart_5[1][1] - chart_5[1][0] };
		struct report* pseoul1; struct report* pseoul2; struct report* pseoul3; struct report* pseoul4; struct report* pseoul5;
		pseoul1 = &seoul1; pseoul2 = &seoul2; pseoul3 = &seoul3; pseoul4 = &seoul4; pseoul5 = &seoul5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pseoul1->after - pseoul1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pseoul2->after - pseoul2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pseoul3->after - pseoul3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pseoul4->after - pseoul4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pseoul5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pseoul5->after - pseoul5->before);
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