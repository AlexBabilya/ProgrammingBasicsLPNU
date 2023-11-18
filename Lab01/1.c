#include <stdio.h>
#include <math.h>

void main()
{
	const int z = -2 ;
	double x, y, r, squarex, squarey, squarez;
	printf("Enter x,y:");
	scanf_s("%lf %lf", &x, &y);
	squarex = x * x;
	squarey = y * y; 
	squarez = z * z;
	r = sqrt(squarex + squarey + squarez);
	printf("r=%lf", r);
    return 0;
}
