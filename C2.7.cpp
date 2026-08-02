#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int amount;
	printf("Enteer a dollar amount:");
	scanf("%d", &amount);

	int b20;
	b20 = amount / 20;

	int b10;
	b10 = (amount - (20 * b20)) / 10;

	int b5;
	b5 = (amount - (20 * b20) - (10 * b10)) / 5;

	int b1;
	b1 = (amount - (20 * b20) - (10 * b10) - (5 * b5)) / 1;

	printf("$20 bills:%d\n", b20);                                    
	printf("$10 bills:%d\n", b10);
	printf("$5 bills:%d\n", b5);
	printf("$1 bills:%d\n", b1);

	return 0;
}