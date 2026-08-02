#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, a, b, c;

	printf("Enter a three-digit number:");
	scanf("%d", &n);

	a = n % 100 %10;
	b = n % 100 /10;
	c = n / 100;
	printf("The reversal is : ");
	printf("%d%d%d,", a, b, c);

	return 0;
}
