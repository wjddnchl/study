#include <stdio.h>

int main(void)
{
	int a, b, c, x;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		x = a;
		if (c > a)
		{
			x = c;
		}
	}
	else if (b > a)
	{
		x = b;
		if (c > b)
		{
			x = c;
		}
	}

	if (a == b && b == c && a == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b && a != c && b != c)
	{
			printf("%d", 1000 + a * 100);
	}
	else if (a == c && a != b && b != c)
	{
			printf("%d", 1000 + a * 100);
	}
	else if (c == b && a != b && a != c)
	{
			printf("%d", 1000 + c * 100);
	}
	else if (a != b && a != c && b != c)
	{
		printf("%d", x * 100);
	}
	return 0;
}