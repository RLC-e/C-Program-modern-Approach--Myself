#define _CRT_SECURE_NO_WARNINGS                        //ds
#include <stdio.h>
int main()
{
	int n,a,b;

	printf("Enter a two-digit number:");
	scanf("%d", &n);

	a = n % 10;
	b = n / 10;
	printf("The reversal is : ");
	printf("%d%d,", a, b);

	return 0;
}