#include <stdio.h>

int main(void)
{
	int N, i;

	scanf_s("%d", &N);

	for (i = N; i >= 1; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}