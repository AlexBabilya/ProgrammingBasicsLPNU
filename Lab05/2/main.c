#include <stdio.h>
#include <math.h>
#include "function.h"

int main(void)
{
	double step, start = 0, end = 7, y = 0;
	printf("Enter step : ");
	scanf_s("%lf", &step);
	while (start < end)
	{
		tabulation(&start, step, result(&start, &y), y);
	}
	return 0;
}
