#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float loan;
	printf("Enter amount of loan:");
	scanf("%f",&loan);

	float rate;
	printf("Enter interest rate:");
	scanf("%f",&rate);

	float payment;
	printf("Enter monthly payment:");
	scanf("%f",&payment);

	float payment_1 = (loan * rate / 1200) + loan - payment;                  //乘法分配简化代码
	float payment_2 = (payment_1 * rate / 1200) + payment_1 - payment;
	float payment_3 = (payment_2 * rate / 1200) + payment_2 - payment;

	printf("Balance remaning after first payment:$%.2f\n", payment_1);
	printf("Balance remaning after second payment:$%.2f\n", payment_2);
	printf("Balance remaning after third payment:$%.2f\n", payment_3);

	return 0;
}