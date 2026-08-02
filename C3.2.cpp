#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	float price;
	int mm;
	int dd;
	int yyyy;

	printf("Enter item number:");
	scanf("%d", &number);

	printf("Enter unit price:");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%-4.2f\t%.2d/%.2d/%d", number, price, mm, dd, yyyy);

	return 0;
}