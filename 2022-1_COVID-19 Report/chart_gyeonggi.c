#include "chart.h"

void COVID19_chart_gyeonggi(void) {
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
		printf("\nCOVID-19 2022�� ��⵵ ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report gyeonggi1 = { chart_1[0][0], chart_1[0][1], chart_1[0][1] - chart_1[0][0] };
		struct report gyeonggi2 = { chart_2[0][0], chart_2[0][1], chart_2[0][1] - chart_2[0][0] };
		struct report gyeonggi3 = { chart_3[0][0], chart_3[0][1], chart_3[0][1] - chart_3[0][0] };
		struct report gyeonggi4 = { chart_4[0][0], chart_4[0][1], chart_4[0][1] - chart_4[0][0] };
		struct report gyeonggi5 = { chart_5[0][0], chart_5[0][1], chart_5[0][1] - chart_5[0][0] };
		struct report* pgyeonggi1; struct report* pgyeonggi2; struct report* pgyeonggi3; struct report* pgyeonggi4; struct report* pgyeonggi5;
		pgyeonggi1 = &gyeonggi1; pgyeonggi2 = &gyeonggi2; pgyeonggi3 = &gyeonggi3; pgyeonggi4 = &gyeonggi4; pgyeonggi5 = &gyeonggi5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��⵵ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��⵵ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeonggi1->after - pgyeonggi1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��⵵ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��⵵ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeonggi2->after - pgyeonggi2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��⵵ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��⵵ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeonggi3->after - pgyeonggi3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��⵵ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��⵵ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeonggi4->after - pgyeonggi4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��⵵ �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��⵵ �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pgyeonggi5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pgyeonggi5->after - pgyeonggi5->before);
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