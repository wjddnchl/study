#include <stdio.h>

int main(void)
{
	int T, A, B, i;

	scanf_s("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}