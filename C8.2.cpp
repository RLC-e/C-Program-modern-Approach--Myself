#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int digit_seem[10] = { 0 };
	int digit, i;
	long n;

	printf("Enter a number:");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		digit_seem[digit] += 1;
		n = n / 10;
	}
	printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("Occurrences:");

	for (i = 0;i < 10;i++)
	{
		printf("\t%d", digit_seem[i]);
	}

	return 0;
}