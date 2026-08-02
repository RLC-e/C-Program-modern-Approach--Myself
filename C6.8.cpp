#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, x ,y;

	printf("Enter number of days in month:");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat):");
	scanf("%d", &m);

	for (y = 1;y < m; y++)
	{
	printf("  \t");
	}

	for (x = 1;x <= n;)
	{
		printf("%2d\t", x);
		x++;

		if ((x + y - 2) % 7 == 0)
		{
			printf("\n");
		}

	}
	return 0;
}
