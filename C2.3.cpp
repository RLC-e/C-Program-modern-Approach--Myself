#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.1415926535f

int main()
{
	float r;
	printf("r:");
	scanf("%f", &r);
	float v;
	v = (4.0f / 3.0f) * PI * r * r * r;

	printf("Volunme of a sphere:%f\n", v);

	return 0;

}