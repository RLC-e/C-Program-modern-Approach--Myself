#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void selection_sort(int a[], int n);

int main()
{
	int a[100] = {0}, n = 0, i = 0;
	char ch;
	
	printf("Enter the numbers: ");
	for (n = 0;n < 100;n++)
	{
		scanf("%d", &a[n]);
		ch = getchar();
		if (ch == '\n')
			break;
	}

	selection_sort(a, n + 1);

	for (i = 0;i <= n;i++)
		printf("%d ", a[i]);

	return 0;
}

void selection_sort(int a[], int n)
{
	int i = 0, max = a[0], lable = 0;

	for (i = 0;i < n;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			lable = i;
		}
	}

	a[lable] = a[n - 1];
	a[n - 1] = max;

	while (n == 1)
		return;

	selection_sort(a, n - 1);
}





