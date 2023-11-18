#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "function.h"
#include "struct.h"
void age(struct list student[], int month, int year)
{
	int age;
	for (int i = 0; i < 29; i++)
	{
		if (student[i].month > month) age = year - student[i].year;
		else  age = year - student[i].year - 1;
		student[i].age = age;
	}
}
void read(struct list student[], int n)
{
	FILE* fp = fopen("list.txt", "r");
	int i = 0, a, b, c, d1, d2, d3;
	while (i < n)
	{
		fscanf(fp, "%s %s %d %d %d %d %d %d", student[i].name, student[i].surname, &a, &b, &c, &d1, &d2, &d3);
		student[i].mark1 = a;
		student[i].mark2 = b;
		student[i].mark3 = c;
		student[i].day = d1;
		student[i].month = d2;
		student[i].year = d3;
		i++;
	}
	fclose(fp);
}

void OUT(int avarage, struct list student[])
{
	int i, j;
	char temp[100];
	char temp1[100];
	for (i = 0; i <= 29; ++i) 
	{
		for (j = i + 1; j <= 29; j++) {
			if (strcmp(student[i].name, student[j].name) > 0) 
			{
				strcpy(temp, student[i].name);
				strcpy(temp1, student[i].surname);
				strcpy(student[i].name, student[j].name);
				strcpy(student[i].surname, student[j].surname);
				strcpy(student[j].name, temp);
				strcpy(student[j].surname, temp1);
			
			}
		}
	}

	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("|NAME OF THE STUDENT:|                                                                         |SURNAME OF THE SRUDENT:|\n");
	for (int i = 0; i < 29; i++) printf("|%15s     |                                                                         |        %15s|\n", student[i].name, student[i].surname);
	printf("------------------------------------------------------------------------------------------------------------------------\n");
}
