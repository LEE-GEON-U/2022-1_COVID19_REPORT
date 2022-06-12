#include "chart.h"

void COVID19_chart_chungnam(void) {
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
		printf("\nCOVID-19 2022�� ��û���� ���� Ȯ�� ��Ȳ");
		printf("\n1. 1��\n2. 2��\n3. 3��\n4. 4��\n5. 5��\n6. �ڷΰ���");
		printf("\n���������������������");
		printf("\n���� ��ȣ�� �Է��Ͻÿ� : ");
		scanf_s("%d", &num2);

		struct report chungnam1 = { chart_1[7][0], chart_1[7][1], chart_1[7][1] - chart_1[7][0] };
		struct report chungnam2 = { chart_2[7][0], chart_2[7][1], chart_2[7][1] - chart_2[7][0] };
		struct report chungnam3 = { chart_3[7][0], chart_3[7][1], chart_3[7][1] - chart_3[7][0] };
		struct report chungnam4 = { chart_4[7][0], chart_4[7][1], chart_4[7][1] - chart_4[7][0] };
		struct report chungnam5 = { chart_5[7][0], chart_5[7][1], chart_5[7][1] - chart_5[7][0] };
		struct report* pchungnam1; struct report* pchungnam2; struct report* pchungnam3; struct report* pchungnam4; struct report* pchungnam5;
		pchungnam1 = &chungnam1; pchungnam2 = &chungnam2; pchungnam3 = &chungnam3; pchungnam4 = &chungnam4; pchungnam5 = &chungnam5;

		switch (num2) {
		case 1:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam1->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam1->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungnam1->after - pchungnam1->before);
			printf("\n���������������������");
			break;
		case 2:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam2->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam2->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungnam2->after - pchungnam2->before);
			printf("\n���������������������");
			break;
		case 3:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam3->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam3->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungnam3->after - pchungnam3->before);
			printf("\n���������������������");
			break;
		case 4:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam4->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam4->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungnam4->after - pchungnam4->before);
			printf("\n���������������������");
			break;
		case 5:
			fopen_s(&fp, "history.txt", "a");
			fprintf(fp, "��û���� �ñ� ���� : %d��\n", num2);
			fclose(fp);
			printf("\n���������������������");
			printf("\n2022�� %d�� ��û���� �ڷγ� ���� Ȯ�� ��Ȳ", num2);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam5->before);
			printf("\n- ���� ���� Ȯ���� = %d", pchungnam5->after);
			printf("\n- ��� �ű� Ȯ���� = %d", pchungnam5->after - pchungnam5->before);
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