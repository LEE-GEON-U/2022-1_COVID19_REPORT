#include "chart.h"

void COVID19_chart_sejong(void) {
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

		struct report sejong1 = { chart_1[16][0], chart_1[16][1], chart_1[16][1] - chart_1[16][0] };
		struct report sejong2 = { chart_2[16][0], chart_2[16][1], chart_2[16][1] - chart_2[16][0] };
		struct report sejong3 = { chart_3[16][0], chart_3[16][1], chart_3[16][1] - chart_3[16][0] };
		struct report sejong4 = { chart_4[16][0], chart_4[16][1], chart_4[16][1] - chart_4[16][0] };
		struct report sejong5 = { chart_5[16][0], chart_5[16][1], chart_5[16][1] - chart_5[16][0] };
		struct report* psejong1; struct report* psejong2; struct report* psejong3; struct report* psejong4; struct report* psejong5;
		psejong1 = &sejong1; psejong2 = &sejong2; psejong3 = &sejong3; psejong4 = &sejong4; psejong5 = &sejong5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", psejong1->before);
			printf("\n- ���� ���� Ȯ���� = %d", psejong1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", psejong1->after - psejong1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", psejong2->before);
			printf("\n- ���� ���� Ȯ���� = %d", psejong2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", psejong2->after - psejong2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", psejong3->before);
			printf("\n- ���� ���� Ȯ���� = %d", psejong3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", psejong3->after - psejong3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", psejong4->before);
			printf("\n- ���� ���� Ȯ���� = %d", psejong4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", psejong4->after - psejong4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "����Ư����ġ�� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ����Ư����ġ�� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", psejong5->before);
			printf("\n- ���� ���� Ȯ���� = %d", psejong5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", psejong5->after - psejong5->before);
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