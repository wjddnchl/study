#include <stdio.h>
int main(void)
{
	int n, i, a=0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a = a + i;
	}
	printf("%d", a);
	return 0;
}