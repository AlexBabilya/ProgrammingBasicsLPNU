#include<stdio.h>

int main()
{

	int n, x, c, z, y, w, v;
	for (n = 9999; n < 10000 && n>999; n = n - 1)
	{
		w = n / 1000;//1
		v = n % 1000;
		y = n % 100;
		x = v / 100;//2 
		z = y / 10;//3
		c = n % 10;//4
		if ((w == x && w != z && w != c) || (w != x && w == c && w != z) || (w != c && w == z && w != x) || (x == w && x != z && x != c) || (x != w && x == c && x != z) || (x == z && x != c && x != w) || (z == w && z != c && z != x) || (z != w && z == x && z != c) || (z == c && z != x && z != w) || (c == w && c != x && c != z) || (c != w && c == z && c != x) || (c != z && c == x && c != w)) printf("%d\n", n);

	}
	return 0;
}
