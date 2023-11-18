#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "function.h"
#include "struct.h"

int main()
{
	int month = 11, year = 2021, avarage;
	struct list student[29];
	read(student, 29);
	age(student, month, year);
	avarage = ((student[0].age + student[2].age + student[1].age + student[3].age + student[4].age + student[5].age + student[6].age + student[7].age + student[8].age + student[9].age + student[10].age + student[12].age + student[11].age + student[13].age + student[14].age + student[15].age + student[16].age + student[17].age + student[18].age + student[19].age + student[20].age + student[21].age + student[22].age + student[23].age + student[24].age + student[25].age + student[26].age + student[27].age + student[28].age) / 28);
	OUT(avarage, student);
}
