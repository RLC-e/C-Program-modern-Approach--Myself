#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reduce(int numerator, int denominator, int* reduce_numerator, int* reduce_denominator);

int main()
{
	int numerator, denominator, yu, GCD, m1, n1;
	printf("Enter a fraction:");
	scanf("%d/%d", &numerator, &denominator);
	
	reduce(numerator, denominator, &numerator, &denominator);

	printf("In lowest terms:%d/%d", numerator, denominator);

	return 0;
}

void reduce(int numerator, int denominator, int* reduce_numerator, int* reduce_denominator)
{
	int temp, GDP, temp_numerator, temp_denominator;
	temp_numerator = numerator;
	temp_denominator = denominator;

	while (numerator % denominator != 0)
	{
		temp = denominator;
		denominator = numerator % denominator;
		numerator = temp;
	}
	GDP = denominator;

	*reduce_numerator = temp_numerator / GDP;
	*reduce_denominator = temp_denominator / GDP;
}