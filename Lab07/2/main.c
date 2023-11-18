#include <stdio.h>
#include <math.h>
#include "function.h"
#define PI 3.14
//
//void TAB_FOR(double, double, double);
//void TAB_WHILE(double, double, double);
//void TAB_DO_WHILE(double, double, double);

void main() 
{
	int start = 0,n;
	double end = PI / 4,step;
	void(*TAB)(double, double, double);
	printf("Enter step:");
	scanf_s("%lf", &step);
	printf("Enter 0 for tabulation using for , 1 for while , -1 for do while:");
	scanf_s("%d", &n);
	if (n == 0) 
	{
		TAB = &TAB_FOR;
		TAB(start, end, step);
	}
	else if(n==1)
	{
		TAB = &TAB_WHILE;
		TAB(start, end, step);
	}
	else if(n==-1)
	{
	TAB = &TAB_DO_WHILE;
	TAB(start, end, step);
	}
}
