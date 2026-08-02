#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

int main()
{
	int a[5][5];
	int i, j;
	int row[5] = { 0 };
	int column[5] = { 0 };

	for (i = 0; i < 5;i++)
	{
		printf("Enter row %d:  ", i + 1);
		for (j = 0;j < 5;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Row totals:  ");

	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			row[i] += a[i][j];
			column[j] += a[i][j];
		}
	}

	for (i = 0;i < 5;i++)
	{
		printf("%d ", row[i]);
	}

	printf("\nColumn totals:  ");

	for (i = 0;i < 5;i++)
	{
		printf("%d ", column[i]);
	}

	return 0;
}