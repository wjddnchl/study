#include <stdio.h>

int main(void)
{
	double a, b, c;
	scanf_s("%lf %lf", &a, &b);
	c = a / b;
	printf("%.9lf", c);
	return 0;
}