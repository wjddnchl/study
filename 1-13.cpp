#include <stdio.h>
int main(void)
{
	int a, b, b1, b2, b3;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	b1 = b / 100;
	b2 = (b - b1*100) / 10;
	b3 = b - (b1*100 + b2*10);
	printf("%d\n", a * b3);
	printf("%d\n", a * b2);
	printf("%d\n", a * b1);
	printf("%d", a * b);

	return 0;
}