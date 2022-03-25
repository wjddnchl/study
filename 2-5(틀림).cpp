#include <stdio.h>

int main(void)
{
	int H, M;

	scanf_s("%d %d", &H, &M);

	if (H > 0 && H < 24)\
	{
		if (M < 45)
		{
			printf("%d %d", H - 1, M + 15);
		}
		else if (M >= 45 && M < 60)
		{
			printf("%d %d", H - 1, M - 45);
		}
	}
	else if (H == 0)
	{
		if (M < 45)
		{
			printf("%d %d", H + 23, M + 15);
		}
		else if (M >= 45 && M < 60)
		{
			printf("%d %d", H, M - 45);
		}
	}
	return 0;
}