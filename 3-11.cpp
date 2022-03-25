#include <stdio.h>

int main(void)
{
	int N, X, i, a;

	scanf_s("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a);
		if (a < X)
		{
			printf("%d ", a);
		}
	}
	return 0;
}