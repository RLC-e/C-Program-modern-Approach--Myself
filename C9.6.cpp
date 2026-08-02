#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float a(float x);

int main()
{
	float x;

	printf("Enter the x: ");
	scanf("%f", &x);

	printf("The result: %.2f",a(x));

	return 0;
}

float a(float x)
{
	return 3.0f * x * x * x * x * x + 2.0f * x * x * x * x - 5.0f * x * x * x - x * x + 7.0f * x - 6.0f;
}


//double x2 = x * x;   
//double x3 = x2 * x;  
//double x4 = x3 * x;  
//double x5 = x4 * x;  

//return 3.0 * x5 + 2.0 * x4 - 5.0 * x3 - x2 + 7.0 * x - 6.0;