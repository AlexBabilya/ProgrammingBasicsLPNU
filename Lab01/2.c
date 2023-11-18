# include <stdio.h>
void main()
{
	double x,z;
	int y;
	printf("Enter x:");
	scanf_s("%lf", &x);
	if (x >= 0);
	{
		y = x / 360;
		z = x - 360 * y;
		if (z > 0 && z < 180)	printf("sinx = positive\n");
		if (z > 180 && z < 360)  printf("sinx = negative\n");
		if (z > 0 && z < 90) printf("cosx = positive\n");
		if (z > 270) printf("cosx = positive\n");
		if (z > 90 && z < 270) printf("cosx = negative\n");
		if (z > 0 && z < 90) printf("tgx = positive\n");
		if (z > 0 && z < 90) printf("ctgx = positive\n");
		if (z > 180 && z < 270) printf("tgx = positive\n");
		if (z > 180 && z < 270) printf("ctgx = positive\n");
		if (z > 90 && z < 180) printf("tgx = negative\n");
		if (z > 90 && z < 180) printf("ctgx = negative\n");
		if (z > 270) printf("tgx = negative\n");
		if (z > 270) printf("ctgx = negative\n");
		if (z == 0) printf("sinx = 0\n");
		if (z == 0) printf("cosx = positive\n");
		if (z == 0) printf("tgx = 0\n");
		if (z == 0) printf("ctgx = does not exist\n");
		if (z == 90) printf("cosx = 0\n");
		if (z == 90) printf("tgx = does not exist\n");
		if (z == 90) printf("ctgx = 0\n");
		if (z == 180) printf("sinx = 0\n");
		if (z == 180) printf("tgx = 0\n");
		if (z == 180) printf("ctgx = does not exist\n");
		if (z == 270) printf("cosx = 0\n");
		if (z == 270) printf("tgx = does not exist\n");
		if (z == 270) printf("ctgx = 0\n");
	}
	if (x < 0)
	{
		y = x / 360;
		z = x - 360 * y;
		if (z < 0 && z > -180)	printf("sinx = negative\n");
		if (z < -180)  printf("sinx = positive\n");
		if (z < 0 && z > -90) printf("cosx = positive\n");
		if (z < -90 && z > -270) printf("cosx = negative\n");
		if (z < -270) printf("cosx = positive\n");
		if (z < 0 && z > -90) printf("tgx = negative\n");
		if (z < 0 && z > -90) printf("ctgx = negative\n");
		if (z < -180 && z >  -270) printf("tgx = negative\n");
		if (z < -180 && z >  -270) printf("ctgx = negative\n");
		if (z < -90 && z > -180) printf("tgx = positive\n");
		if (z < -90 && z > -180) printf("ctgx = positive\n");
		if (z < -270) printf("tgx = positive\n");
		if (z < -270) printf("ctgx = positive\n");
		if (z == -270) printf("cosx = 0\n");
		if (z == -270) printf("tgx = does not exist\n");
		if (z == -270) printf("ctgx = 0\n");
		if (z == -180) printf("sinx = 0\n");
		if (z == -180) printf("tgx = 0\n");
		if (z == -180) printf("ctgx = does not exist\n");
		if (z == -90) printf("cosx  = 0\n");
		if (z == -90) printf("tgx = does not exist\n");
		if (z == -90) printf("ctgx = 0\n");

	}
		return 0;
}
