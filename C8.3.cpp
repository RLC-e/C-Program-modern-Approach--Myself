#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int digit_seem[10] = { 0 };
	int digit, i, repeat = 0;
	long n;

	printf("Enter a number:");
	scanf("%ld", &n);

	while (n > 0)
	{
		while (n > 0)
		{
			digit = n % 10;
			digit_seem[digit] += 1;
			n = n / 10;
		}
		printf("Repeated digit(s):");

		for (i = 0;i < 10;i++)
		{
			if (digit_seem[i] > 1)
			{
				printf(" %d", i);
				repeat = 1;
			}
		}

		if (!repeat)
		{
		    printf("None");
		}

		repeat = 0;
		printf("\n");

		printf("Enter a number:");
		scanf("%ld", &n);
		
		for (i = 0;i < 10;i++)
		{
			digit_seem[i] = 0;
		}

	}
		return 0;
}