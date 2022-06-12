#include "chart.h"

void COVID19_chart_incheon(void) {
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
		printf("\nCOVID-19 2022�� ��õ������ ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report incheon1 = { chart_1[4][0], chart_1[4][1], chart_1[4][1] - chart_1[4][0] };
		struct report incheon2 = { chart_2[4][0], chart_2[4][1], chart_2[4][1] - chart_2[4][0] };
		struct report incheon3 = { chart_3[4][0], chart_3[4][1], chart_3[4][1] - chart_3[4][0] };
		struct report incheon4 = { chart_4[4][0], chart_4[4][1], chart_4[4][1] - chart_4[4][0] };
		struct report incheon5 = { chart_5[4][0], chart_5[4][1], chart_5[4][1] - chart_5[4][0] };
		struct report* pincheon1; struct report* pincheon2; struct report* pincheon3; struct report* pincheon4; struct report* pincheon5;
		pincheon1 = &incheon1; pincheon2 = &incheon2; pincheon3 = &incheon3; pincheon4 = &incheon4; pincheon5 = &incheon5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��õ������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��õ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pincheon1->after - pincheon1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��õ������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��õ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pincheon2->after - pincheon2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��õ������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��õ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pincheon3->after - pincheon3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��õ������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��õ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pincheon4->after - pincheon4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��õ������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��õ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pincheon5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pincheon5->after - pincheon5->before);
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