#include <stdio.h>
#define N 4
#define M 3
int main(void)
{
	int arr[N][M];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("Enter number:");
			scanf_s("%d", *(arr + i) + j);
		}
	}

	for (int i = 2; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{

			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
