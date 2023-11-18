#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "function.h"

#define SIZE 10000

void main()
{
	int mas[SIZE+1];
	int mas1[SIZE+1];
	printf("%d\n",randomly(&mas, &mas1));
	time_t t;
	time(&t);
	printf("Bubble started: %s", ctime(&t));
	BUBBLE(mas);
	BUBBLE(mas1);
	time(&t);
	printf("Bubble ended: %s", ctime(&t));
	time(&t);
	printf("%d\n", COMPEAR(mas, mas1));
	randomly(&mas, &mas1);
	printf("Default sorting started: %s", ctime(&t));
	qs_sort(mas, 0, 9999);
	qs_sort(mas1, 0, 9999);
	time(&t);
	printf("Default sorting ended: %s", ctime(&t));
		/*for (int j = 0; j < SIZE - 1; j++)
		{
			printf("%d ", mas[j]);
		}
		printf("\n");
		for (int j = 0; j < SIZE - 1; j++)
		{
			printf("%d ", mas1[j]);
		}
		printf("\n");*/
	printf("%d",COMPEAR(mas, mas1));
}
