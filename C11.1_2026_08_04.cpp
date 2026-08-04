#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);

int main()
{
	int amount, b20, b10, b5, b1;
	printf("Enteer a dollar amount:");
	scanf("%d", &amount);

	pay_amount(amount, &b20, &b10, &b5, &b1);

	printf("$20 bills:%d\n", b20);
	printf("$10 bills:%d\n", b10);
	printf("$5 bills:%d\n", b5);
	printf("$1 bills:%d\n", b1);

	return 0;
}

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones)
{
	int remaining;

	*twenties = dollars / 20;
	remaining = dollars % 20;

	*tens = remaining / 10;
	remaining %= 10;

	*fives = remaining / 5;
	remaining %= 5;

	*ones = remaining;
}
