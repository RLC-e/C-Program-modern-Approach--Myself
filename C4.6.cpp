#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

	printf("Enter the first 12 digits of an EAN:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	int sum1 = n2 + n4 + n6 + n8 + n10+ n12;
	int sum2 = n1 + n3 + n5 + n7 + n9 + n11;
	int sum3 = sum1 * 3 + sum2 - 1;
	printf("Check digit:%d", 9 - sum3 % 10);

	return 0;
}