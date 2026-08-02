#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int income;
	printf("Enter the income:");
	scanf("%d", &income);

	if (income < 750)
		printf("Tax:%.2f", income * .01f);
	else if (income < 2250)
		printf("Tax:%.2f", 7.50f + (income - 750.00f) * .02f);
	else if (income < 3750)
		printf("Tax:%.2f", 37.50f + (income - 2250.00f) * .03f);
	else if (income < 5250)
		printf("Tax:%.2f", 82.50f + (income - 3750.00f) * .04f);
	else if (income < 7000)
		printf("Tax:%.2f", 142.50f + (income - 5250.00f) * .05f);
	else
		printf("Tax;%.2f", 230.00f + (income - 7000.00f) * .06f);

	return 0;
}
