#include <stdio.h>

int main(void)
{
	char TXT[49];

	scanf_s("%s", &TXT,sizeof(TXT));
	printf("%s??!", TXT);

	return 0;
}