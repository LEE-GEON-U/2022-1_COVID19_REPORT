#include "chart.h"

void COVID19_chart_daegu(void) {
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
		printf("\nCOVID-19 2022�� �뱸������ ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report daegu1 = { chart_1[6][0], chart_1[6][1], chart_1[6][1] - chart_1[6][0] };
		struct report daegu2 = { chart_2[6][0], chart_2[6][1], chart_2[6][1] - chart_2[6][0] };
		struct report daegu3 = { chart_3[6][0], chart_3[6][1], chart_3[6][1] - chart_3[6][0] };
		struct report daegu4 = { chart_4[6][0], chart_4[6][1], chart_4[6][1] - chart_4[6][0] };
		struct report daegu5 = { chart_5[6][0], chart_5[6][1], chart_5[6][1] - chart_5[6][0] };
		struct report* pdaegu1; struct report* pdaegu2; struct report* pdaegu3; struct report* pdaegu4; struct report* pdaegu5;
		pdaegu1 = &daegu1; pdaegu2 = &daegu2; pdaegu3 = &daegu3; pdaegu4 = &daegu4; pdaegu5 = &daegu5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�뱸������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �뱸������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaegu1->after - pdaegu1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�뱸������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �뱸������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaegu2->after - pdaegu2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�뱸������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �뱸������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaegu3->after - pdaegu3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�뱸������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �뱸������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaegu4->after - pdaegu4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "�뱸������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� �뱸������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaegu5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaegu5->after - pdaegu5->before);
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