#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float amount;
	printf("Enter an amount:");
	scanf("%f",&amount);

	float tax_added;
	tax_added = (amount * 0.05f) + amount;
	printf("With tax added:%.2f",tax_added);

	return 0;
}
