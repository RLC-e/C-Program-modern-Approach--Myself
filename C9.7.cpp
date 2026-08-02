#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float power(float x, int n);

int main()
{
	float x;
	int n;

	printf("Enter the x: ");
	scanf("%f", &x);
	printf("Enter the n: ");
	scanf("%d", &n);

	printf("The result is: %.2f",power(x, n));

	return 0;
}

float power(float x, int n)
{
	if (n % 2 == 1)
	{
		return x * power(x, n - 1);
	}

	if (n == 0)
		return 1;
	else
		return x * x * power(x, n - 2);
}



