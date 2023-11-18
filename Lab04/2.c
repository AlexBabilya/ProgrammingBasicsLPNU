#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>

void main()
{
	FILE* pfile;
	FILE* log;
	log = fopen("log.txt", "a+");
	time_t current;
	current = time(NULL);
    fputs(ctime(&current), log);
	fputs("Program was started\n", log);
	char str[100];
	pfile = fopen("test.txt", "wb");
	printf("Enter x and y: ");
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Numbers entered\n", log);
	if (pfile != NULL);
	{
		fwrite(&x, sizeof(x), 1, pfile);
		fwrite(&y, sizeof(y), 1, pfile);
	}
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Variables are put at file\n", log);
	fclose(pfile);
	double x1, y1;
	pfile = fopen("test.txt", "rb");
	if (pfile != NULL)
	{
		while (!feof(pfile))
		{
			fread(&x1, sizeof(x1), 1, pfile);
			fread(&y1, sizeof(y1), 1, pfile);
		}
	}
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Variables are taken from file\n", log);
	double res;
	res = sqrt(pow(x1, 2) + pow(y1, 2) + 4);
	printf("res=%lf", res);
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Res is calculated\n", log);
	fclose(pfile);

	FILE* pres;
	pres = fopen("result.txt", "w");
	if (pres != NULL);
	{
		fprintf(pres, "%lf", res);
	}
	fclose(pres);
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Res is put at another file \n", log);
	current = time(NULL);
	fputs(ctime(&current), log);
	fputs("Program ended\n\n", log);
	fclose(log);
	return 0;

}
