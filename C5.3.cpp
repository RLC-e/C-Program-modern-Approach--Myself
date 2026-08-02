#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Quantity;
	float Price, value, commission, competitor_commission;

	printf("Enter the Quantity:");
	scanf("%d", &Quantity);
	printf("Enter the Price:");
	scanf("%f", &Price);

	value = Quantity * Price;
	printf("Value of trade:%f\n", value);

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commisson:$%.2f\n", commission);

	if (Quantity < 2000)
		competitor_commission = (.03f + 33.00f)* Quantity;
	else
		competitor_commission = (.02f + 33.00f )* Quantity;

	printf("Competitor_commisson:$%.2f\n", competitor_commission);

	return 0;
}