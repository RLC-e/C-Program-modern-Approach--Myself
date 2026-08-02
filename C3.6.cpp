#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, n4;

	printf("Enter two fractions separated by a plus sign:");
	scanf("%d/%d+%d/%d", &n1, &n2, &n3, &n4);

	printf("The sum is %d/%d", n1 * n4 + n2 * n3, n2 * n4);

	return 0;
}