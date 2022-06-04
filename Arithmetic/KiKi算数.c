#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	long a = 0, b = 0, q = 0, w = 0, e = 0, t = 0;
	scanf("%ld%ld", &a, &b);
	if (a >= 100)
	{
		for (t = 0; t < 2; t++)
		{
			q = a % 10;
			w = w + q * (long)pow(10, t);
			a /= 10;
		}
		a = w;
	}
	if (b >= 100)
	{
		w = 0, q = 0;
		for (t = 0; t < 2; t++)
		{
			q = b % 10;
			w = w + q *(long) pow(10, t);
			b /= 10;
		}
		b = w;
	}
	e = a + b;
	if (e >= 100)
	{
		q = 0, w = 0;
		for (t = 0; t < 2; t++)
		{
			q = e % 10;
			w = w + q * (long)pow(10, t);
			e /= 10;
		}
		e = w;
	}
	printf("%ld\n", e);
	return 0;
}