#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char* argv[])
{
	int n1, n2, n3;
	printf("There are %d arguments\n", argc);
	if (!(argc == 4)) printf("Error - not enough or too many arguments\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		n3 = atoi(argv[3]);

		int* arr1 = (int*)malloc(n1 * sizeof(int));
		int* arr2 = (int*)malloc(n2 * sizeof(int));
		int* arr3 = (int*)malloc(n3 * sizeof(int));
		arr3[0] = n3;
		arr2[0] = n2;
		arr1[0] = n1;
		for (int i = 1; i < n1; i++)
		{
			printf("Enter %d-th item of array 1: ", i);
			scanf_s("%d", &arr1[i]);
		}
		for (int i = 1; i < n2; i++)
		{
			printf("Enter %d-th item of array 2: ", i);
			scanf_s("%d", &arr2[i]);
		}
		for (int i = 1; i < n3; i++)
		{
			printf("Enter %d-th item of array 3: ", i);
			scanf_s("%d", &arr3[i]);
		}
		int** ptr1;
		int** ptr2;
		int** ptr3;
		ptr1 = (int*)malloc(n1 * sizeof(int));
		ptr2 = (int*)malloc(n2 * sizeof(int));
		ptr3 = (int*)malloc(n3 * sizeof(int));
		for (int i = 0; i < n1; i++) ptr1[i] = arr1[i];
		for (int i = 0; i < n2; i++) ptr2[i] = arr2[i];
		for (int i = 0; i < n3; i++) ptr3[i] = arr3[i];
		printf("Sum = %d", Fsum(ptr1, ptr2, ptr3, n1, n2, n3));
	}
	return 0;
}
