#include<stdio.h>

#define PI 3.14
#define F_PERIMETER(a, b) PI*(a + b)

void main() {
	double a, b;
	printf("Enter a and b:");
	scanf_s("%lf %lf",&a,&b);
	if ((a < 0) || (b < 0)) printf("The numbers should be positive or zero");
	else printf("The lenght of elips is %lf\n", F_PERIMETER(a, b));
}
