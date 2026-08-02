#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	char ch;

	printf("Enter a 12-hour time:");
	scanf("%d:%d %c", &n1, &n2, &ch);

	printf("Equivalent 24-hour time: ");

	if (ch == 'A' || ch == 'a')
	{
		if (n1 == 12)
		{
			printf("0:");
		}

		if (n1 < 12)
		{
			printf("%d:", n1);
		}
	}

	if (ch == 'P' || ch == 'p')
	{
		if (n1 == 12)
		{
			printf("12:");
		}

		if (n1 < 12)
		{
			printf("%d:", n1 + 12);
		}
	}

	printf("%.2d", n2);

	return 0;
}