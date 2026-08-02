#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, jy;

	printf("Enter a positive number:");
	scanf("%lf", &x);

	y = 1.0;

	while (1)
	{
		jy = y;
		y = (y + x / y) / 2.0;

		if (fabs(y - jy) < 0.00001)
			break;
	}
	printf("Square root: %f\n", y);

	return 0;
}