#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int Fsum(int* p1, int* p2, int* p3, int n1, int n2, int n3)
{
	int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < n1; i++) {
		sum1 += *(p1 + i);
	}
	for (int i = 0; i < n2; i++) {
		sum2 += *(p2 + i);
	}
	for (int i = 0; i < n3; i++) {
		sum3 += *(p3 + i);
	}
	return sum = sum1 + sum2 + sum3;
}
