#include "chart.h"

void COVID19_chart_jeju(void) {
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
		printf("\nCOVID-19 2022�� ����Ư����ġ�� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report jeju1 = { chart_1[15][0], chart_1[15][1], chart_1[15][1] - chart_1[15][0] };
		struct report jeju2 = { chart_2[15][0], chart_2[15][1], chart_2[15][1] - chart_2[15][0] };
		struct report jeju3 = { chart_3[15][0], chart_3[15][1], chart_3[15][1] - chart_3[15][0] };
		struct report jeju4 = { chart_4[15][0], chart_4[15][1], chart_4[15][1] - chart_4[15][0] };
		struct report jeju5 = { chart_5[15][0], chart_5[15][1], chart_5[15][1] - chart_5[15][0] };
		struct report* pjeju1; struct report* pjeju2; struct report* pjeju3; struct report* pjeju4; struct report* pjeju5;
		pjeju1 = &jeju1; pjeju2 = &jeju2; pjeju3 = &jeju3; pjeju4 = &jeju4; pjeju5 = &jeju5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeju1->after - pjeju1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeju2->after - pjeju2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeju3->after - pjeju3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeju4->after - pjeju4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pjeju5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pjeju5->after - pjeju5->before);
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