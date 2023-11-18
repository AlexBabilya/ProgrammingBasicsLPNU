#include <stdio.h>

#define N 4
#define M 3

double F_Avarage(double[][M]);
void main()
{
	double Matr1[N][M] = { {1,2,22},{12,-1,0},{-9,14,76},{78,65,3} }, Matr2[N][M] = { {12,79,-23},{52,-32,0},{-62,84,12},{78,-34,35} }, Matr3[N][M] = { {65,-21,-22},{66,-76,50},{-60,94,99},{-8,-5,3} };
	double Avg_Mart1 = F_Avarage(Matr1);
	double Avg_Mart2 = F_Avarage(Matr2);
	double Avg_Mart3 = F_Avarage(Matr3);
	if ((Avg_Mart1 > Avg_Mart2) && (Avg_Mart1 > Avg_Mart3))
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				printf("%.0lf  ", Matr1[i][j]);
			}
			printf("\n");
		}
	}
	if ((Avg_Mart2 > Avg_Mart1) && (Avg_Mart2 > Avg_Mart3))
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				printf("%.0lf  ", Matr2[i][j]);
			}
			printf("\n");
		}
	}
	if ((Avg_Mart3 > Avg_Mart1) && (Avg_Mart3 > Avg_Mart2))
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				printf("%.0lf  ", Matr3[i][j]);
			}
			printf("\n");
		}
	}

}
double F_Avarage(double Matr1[][M])
{
	int count = 0;
	double sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (Matr1[i][j] > 0) {
				sum += Matr1[i][j];
				count++;
			}
		}
	double avg = sum / count;
	return avg;
}
