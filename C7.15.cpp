#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n = 1;
	int i, x;

	printf("Enter a positive integer: ");
	scanf("%d", &i);
	x = i;

	while (i > 1)
	{
		n = n * i;
		i--;
	}
	printf("Factorial of %d: %f", x, n);

	return 0;
}