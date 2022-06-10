#include "chart.h"

void COVID19_chart_daejeon(void) {
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
		printf("\nCOVID-19 2022�� ���������� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);
		
		struct report daejeon1 = { chart_1[12][0], chart_1[12][1], chart_1[12][1] - chart_1[12][0] };
		struct report daejeon2 = { chart_2[12][0], chart_2[12][1], chart_2[12][1] - chart_2[12][0] };
		struct report daejeon3 = { chart_3[12][0], chart_3[12][1], chart_3[12][1] - chart_3[12][0] };
		struct report daejeon4 = { chart_4[12][0], chart_4[12][1], chart_4[12][1] - chart_4[12][0] };
		struct report daejeon5 = { chart_5[12][0], chart_5[12][1], chart_5[12][1] - chart_5[12][0] };
		struct report* pdaejeon1; struct report* pdaejeon2; struct report* pdaejeon3; struct report* pdaejeon4; struct report* pdaejeon5;
		pdaejeon1 = &daejeon1; pdaejeon2 = &daejeon2; pdaejeon3 = &daejeon3; pdaejeon4 = &daejeon4; pdaejeon5 = &daejeon5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���������� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���������� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaejeon1->after - pdaejeon1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���������� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���������� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaejeon2->after - pdaejeon2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���������� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���������� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaejeon3->after - pdaejeon3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���������� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���������� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaejeon4->after - pdaejeon4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���������� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���������� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pdaejeon5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pdaejeon5->after - pdaejeon5->before);
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