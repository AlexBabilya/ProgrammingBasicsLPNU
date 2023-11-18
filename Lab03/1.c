#include <stdio.h>
#define N 10
int main()
{
	int arr[N];
	printf("Enter first number:");
	scanf_s("%d", &arr[0]);
	for (int i = 1; i < N; i++) {
		printf("Enter next number:");
		scanf_s("%d", &arr[i]);
	}
	if ((arr[9] < arr[8]) && (arr[8] < arr[7]) && (arr[7] < arr[6]) && (arr[6] < arr[5]) && (arr[5] < arr[4]) && (arr[4] < arr[3]) && (arr[3] < arr[2]) && (arr[2] < arr[1]) && (arr[1] < arr[0])) printf("Incorect way");
	else {
		int min = arr[0];

		for (int i = 0; i < N; ++i)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		arr[9] = min;
		for (int j = 0; j < N; j++)
		{
			printf(" %d", arr[j]);
		}

	}
	return 0;
}
