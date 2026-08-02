#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float n, term = 1.0f, e = 1.0f;

	printf("Enter a number:");
	scanf("%f", &n);

	for (int i = 1;term >= n;i++)
	{
		term = term / i;
		e += term;
	}
	printf("e: %f", e);

	return 0;
}