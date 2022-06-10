#include "chart.h"

void loop(void) {
	static int loop;
	static int* p = &loop;
	static int** q = &p;
}