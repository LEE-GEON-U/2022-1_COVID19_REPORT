#include "chart.h"

void COVID19_chart_gangwon(void) {
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
		printf("\nCOVID-19 2022�� ������ ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report gangwon1 = { chart_1[11][0], chart_1[11][1], chart_1[11][1] - chart_1[11][0] };
		struct report gangwon2 = { chart_2[11][0], chart_2[11][1], chart_2[11][1] - chart_2[11][0] };
		struct report gangwon3 = { chart_3[11][0], chart_3[11][1], chart_3[11][1] - chart_3[11][0] };
		struct report gangwon4 = { chart_4[11][0], chart_4[11][1], chart_4[11][1] - chart_4[11][0] };
		struct report gangwon5 = { chart_5[11][0], chart_5[11][1], chart_5[11][1] - chart_5[11][0] };
		struct report* pgangwon1; struct report* pgangwon2; struct report* pgangwon3; struct report* pgangwon4; struct report* pgangwon5;
		pgangwon1 = &gangwon1; pgangwon2 = &gangwon2; pgangwon3 = &gangwon3; pgangwon4 = &gangwon4; pgangwon5 = &gangwon5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgangwon1->after - pgangwon1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgangwon2->after - pgangwon2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgangwon3->after - pgangwon3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgangwon4->after - pgangwon4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "������ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ������ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgangwon5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgangwon5->after - pgangwon5->before);
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