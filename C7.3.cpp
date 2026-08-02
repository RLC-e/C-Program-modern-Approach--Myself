#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n, sum = 0.0;

	printf("Enter the 0.0 to stop\n");
	printf("Enter number (0 to terminate):");

	scanf("%lf", &n);

	while (n != 0.0)
	{
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %f\n", sum);

	return 0;
}