#include <stdio.h>

int main(void)
{
	int h, m, set, x;

	scanf_s("%d %d",&h,&m);
	scanf_s("%d", &set);

	x = (m + set) / 60;

	if ((m + set) < 60)
	{
		printf("%d %d", h, m + set);
	}
	else if ((m + set) >= 60)
	{
		if ((h + x) < 24)
		{
			printf("%d %d", h + x, m + set - 60 * x);
		}
		else if ((h + x) >= 24)
		{
			printf("%d %d", (h + x) - 24, m + set - 60 * x);
		}
	}
	return 0;
}