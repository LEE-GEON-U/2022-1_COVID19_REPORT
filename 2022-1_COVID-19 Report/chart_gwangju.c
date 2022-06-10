#include "chart.h"

void COVID19_chart_gwangju(void) {
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
		printf("\nCOVID-19 2022�� ���ֱ����� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report gwangju1 = { chart_1[13][0], chart_1[13][1], chart_1[13][1] - chart_1[13][0] };
		struct report gwangju2 = { chart_2[13][0], chart_2[13][1], chart_2[13][1] - chart_2[13][0] };
		struct report gwangju3 = { chart_3[13][0], chart_3[13][1], chart_3[13][1] - chart_3[13][0] };
		struct report gwangju4 = { chart_4[13][0], chart_4[13][1], chart_4[13][1] - chart_4[13][0] };
		struct report gwangju5 = { chart_5[13][0], chart_5[13][1], chart_5[13][1] - chart_5[13][0] };
		struct report* pgwangju1; struct report* pgwangju2; struct report* pgwangju3; struct report* pgwangju4; struct report* pgwangju5;
		pgwangju1 = &gwangju1; pgwangju2 = &gwangju2; pgwangju3 = &gwangju3; pgwangju4 = &gwangju4; pgwangju5 = &gwangju5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ֱ����� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ֱ����� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgwangju1->after - pgwangju1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ֱ����� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ֱ����� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgwangju2->after - pgwangju2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ֱ����� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ֱ����� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgwangju3->after - pgwangju3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ֱ����� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ֱ����� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgwangju4->after - pgwangju4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ֱ����� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ֱ����� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgwangju5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgwangju5->after - pgwangju5->before);
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