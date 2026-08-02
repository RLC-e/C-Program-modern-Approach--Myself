#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float n;
	float max;

	printf("Enter a number:");
	scanf("%f", &n);
	max = n;

	if (n == 0)
		printf("The largest number entweed was 0");
	if (n < 0)
		printf("error");

	for (;n > 0;)
	{
		printf("Enter a number:");
		scanf("%f", &n);

		if (n >= max)
			max = n;

		if (n <= 0)
		{
			printf("The largest number entered was %f",max);
			break;
		}
	}

	return 0;
}
