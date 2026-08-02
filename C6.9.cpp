#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float loan;
	printf("Enter amount of loan:");
	scanf("%f", &loan);

	float rate;
	printf("Enter interest rate:");
	scanf("%f", &rate);

	float payment;
	printf("Enter monthly payment:");
	scanf("%f", &payment);

	int time;
	printf("Enter paymen time:");
	scanf("%d", &time);

	int n = 1;
	float m;
	m = loan;

	for (1; n <= time; n++)
    {
		m = m * (rate / 12 * 0.01f + 1.0f) - payment;
		printf("Month %d: $%f\n", n, m);
	}

	return 0;
}