#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float tax(int income);

int main()
{
	int income;
	float result;
	printf("Enter the income:");
	scanf("%d", &income);

	result = tax(income);

	printf("Tax: %.2f", result);

	return 0;
}

float tax(int income)
{
	if (income < 750)

		return (income * .01f);
	else if (income < 2250)
		return (7.50f + (income - 750.00f) * .02f);
	else if (income < 3750)
		return (37.50f + (income - 2250.00f) * .03f);
	else if (income < 5250)
		return (82.50f + (income - 3750.00f) * .04f);
	else if (income < 7000)
		return (142.50f + (income - 5250.00f) * .05f);
	else
		return (230.00f + (income - 7000.00f) * .06f);
}


