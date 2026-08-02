#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

int main()
{
	int a[5][5];
	int i = 0, j = 0, max = 0, min = 100;
	float row[5] = { 0 };
	float column[5] = { 0 };

	for (i = 0; i < 5;i++)
	{
		printf("Enter student score %d:  ", i + 1);
		for (j = 0;j < 5;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Sum score:  ");

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
		printf("%d ", (int)row[i]);
	}

	printf("\n");
	printf("Average score:  ");

	for (i = 0;i < 5;i++)
	{
		printf("%.1f ", row[i] / 5);
	}

	printf("\n");
	printf("Per average score:  ");

	for (j = 0;j < 5;j++)
	{
		printf("%.2f ", column[j] / 5);
	}

	printf("\n");
	printf("The highest score:  ");

	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}
		printf("%d ", max);
		max = 0;
	}

	printf("\n");
	printf("The lowest score:  ");

	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if (min > a[i][j])
				min = a[i][j];
		}
		printf("%d ", min);
		min = 100;
	}

	return 0;
}