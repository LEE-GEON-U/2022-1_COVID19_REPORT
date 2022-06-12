#include "chart.h"

void COVID19_chart_gyeongnam(void) {
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
		printf("\nCOVID-19 2022�� ��󳲵� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report gyeongnam1 = { chart_1[3][0], chart_1[3][1], chart_1[3][1] - chart_1[3][0] };
		struct report gyeongnam2 = { chart_2[3][0], chart_2[3][1], chart_2[3][1] - chart_2[3][0] };
		struct report gyeongnam3 = { chart_3[3][0], chart_3[3][1], chart_3[3][1] - chart_3[3][0] };
		struct report gyeongnam4 = { chart_4[3][0], chart_4[3][1], chart_4[3][1] - chart_4[3][0] };
		struct report gyeongnam5 = { chart_5[3][0], chart_5[3][1], chart_5[3][1] - chart_5[3][0] };
		struct report* pgyeongnam1; struct report* pgyeongnam2; struct report* pgyeongnam3; struct report* pgyeongnam4; struct report* pgyeongnam5;
		pgyeongnam1 = &gyeongnam1; pgyeongnam2 = &gyeongnam2; pgyeongnam3 = &gyeongnam3; pgyeongnam4 = &gyeongnam4; pgyeongnam5 = &gyeongnam5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongnam1->after - pgyeongnam1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongnam2->after - pgyeongnam2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongnam3->after - pgyeongnam3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongnam4->after - pgyeongnam4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��󳲵� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��󳲵� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeongnam5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeongnam5->after - pgyeongnam5->before);
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