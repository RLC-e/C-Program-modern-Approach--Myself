#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x;
	scanf("%f", &x);

	float A;
	A =((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("%f", A);

	return 0;
}