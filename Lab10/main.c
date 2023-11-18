#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define N 500
#include "struct.h"
#include "function.h"

int main()
{
	int month = 12, year = 2021, avarage,n;
	struct list student[6];
	Read(student, 5);
	avarage=age(student, month, year);
	printf("                                      The sorted group without changes:\n\n");
	OUT(student,5);
	ReadNew(student,5);
	printf("                                      The unsorted group with new member:\n\n");
	OUT(student, 6);
	printf("                                      The sorted group with changes:\n\n");
	sort(student, 6);
	OUT(student, 6);
	struct list* pListHead = NULL;
	pListHead = &student[0];
	pListHead->next = &student[1];
	for (int k = 1; k < 6; k++)
	{
		if (k == 5)
		{
			student[k].next = NULL;
		}
		else
		{
			student[k].next = &student[k + 1];
		}
	}
	AdvOut(pListHead);		
}
