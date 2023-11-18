#include "function.h"
#include <stdio.h>
#include <math.h>

double result(double* start, double* y)
{
	double  x;
	x = *start;
	*y = 1 / pow(x + 1, 2 / 3.0);
	if (*y > 0)
		return 1;
	else if (*y < 0)
		return -1;
	else if (*y == 0)
		return 0;
}
void tabulation(double* start, double step, double result)
{
	double res;
	res = *start;
	*start = *start + step;
	printf("\n|x=%9.3lf|y=%9.3lf|", res, result);
}
