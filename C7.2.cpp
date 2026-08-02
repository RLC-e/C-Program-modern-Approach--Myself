#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n = 2147483647;
	char ch;

	printf("This program prints a table of squares.\n");

	for (i = 1;i <= n;i++)
	{
		printf("%10d%10d\n", i, i * i);

		if (i % 24 == 0)
		{
			printf("Press Enter to continue...");
			while ((ch = getchar()) != '\n')
			;
		}
	}
	return 0;
}