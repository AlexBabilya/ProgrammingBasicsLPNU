#include <stdio.h>
#include <stdarg.h>

int F_Positive(int, ...);

void main()
{
	int n1, n2, n3, n4, n5, n6;
	printf("Enetr numbers: ");
	scanf_s("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	printf("Quantity of positive numbers is %d", F_Positive(n1, n2, n3, n4, n5, n6));
}

/*int F_Positive(int  n, ...)
{
	int count = 0;
	int* ptr = &n + 1;
	for (; n > 0; n--)
	{
		{

			if (*ptr > 0) count++;
		}
		*ptr++;
	}

	return count;
}*/
int F_Positive(int  n, ...)
{
	int count = 0;
	va_list numb;
	va_start(numb, n);
	for (int i=0; i<n; i++)
	{
		{
			if (va_arg(numb,int)>0) count++;
		}
		
	}
	va_end(numb);
	return count;
}
