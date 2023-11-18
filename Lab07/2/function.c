#include <stdio.h>
#include <math.h>
#include "function.h"

#define PI 3.14

void TAB_FOR(double start, double end, double step)
{
	double y = 0;
	for (; start < end; )
	{
		y = pow((1 + sin(2 * start)), 2.0);
		printf("x=%lf y=%lf\n", start, y);
		start = start + step;
	}
}
void TAB_WHILE(double start, double end, double step)
{
	double y = 0;
	while (start < end)
	{
		y = pow((1 + sin(2 * start)), 2.0);
		printf("x=%lf y=%lf\n", start, y);
		start = start + step;
	}
}
void TAB_DO_WHILE(double start, double end, double step)
{
	double y = 0;
	do
	{
		y = pow((1 + sin(2 * start)), 2.0);
		printf("x=%lf y=%lf\n", start, y);
		start = start + step;
	} while (start < end);
}
