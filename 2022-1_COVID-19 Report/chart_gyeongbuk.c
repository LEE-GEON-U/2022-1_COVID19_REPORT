#include "chart.h"

void COVID19_chart_gyeongbuk(void) {
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
		printf("\nCOVID-19 2022�� ���ϵ� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report gyeongbuk1 = { chart_1[5][0], chart_1[5][1], chart_1[5][1] - chart_1[5][0] };
		struct report gyeongbuk2 = { chart_2[5][0], chart_2[5][1], chart_2[5][1] - chart_2[5][0] };
		struct report gyeongbuk3 = { chart_3[5][0], chart_3[5][1], chart_3[5][1] - chart_3[5][0] };
		struct report gyeongbuk4 = { chart_4[5][0], chart_4[5][1], chart_4[5][1] - chart_4[5][0] };
		struct report gyeongbuk5 = { chart_5[5][0], chart_5[5][1], chart_5[5][1] - chart_5[5][0] };
		struct report* pgyeongbuk1; struct report* pgyeongbuk2; struct report* pgyeongbuk3; struct report* pgyeongbuk4; struct report* pgyeongbuk5;
		pgyeongbuk1 = &gyeongbuk1; pgyeongbuk2 = &gyeongbuk2; pgyeongbuk3 = &gyeongbuk3; pgyeongbuk4 = &gyeongbuk4; pgyeongbuk5 = &gyeongbuk5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongbuk1->after - pgyeongbuk1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongbuk2->after - pgyeongbuk2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongbuk3->after - pgyeongbuk3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongbuk4->after - pgyeongbuk4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "���ϵ� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ���ϵ� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongbuk5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongbuk5->after - pgyeongbuk5->before);
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