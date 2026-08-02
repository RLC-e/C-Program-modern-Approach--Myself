#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j, x = 1;

	printf("Thhis program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("EEnert size of magic square: ");
	scanf("%d", &n);

	int ch[99][99];

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			ch[i][j] = 0;
		}
	}

	i = 0;
	j = n / 2;
	ch[i][j] = 1;

	for (x = 2;x <= n * n;x++)
	{
		i--, j++;

		if (i < 0)
			i = n - 1;
		if (j >= n)
			j = 0;

		if (ch[i][j] != 0)
		{
			i += 2;
			j--; 
		}

		if (i >= n)
			i = i % n;
		if (j < 0)
			j = n - 1;

		ch[i][j] = x;
	}

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			printf("\t%d", ch[i][j]);
		}
		printf("\n");
	}
	return 0;
}