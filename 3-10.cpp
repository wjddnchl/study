#include <stdio.h>

int main(void)
{
	int i, j, k, a;

	scanf_s("%d", &a);

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}