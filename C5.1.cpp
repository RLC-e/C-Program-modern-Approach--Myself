#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d", &number);

	if (number <= 9)
		printf("The number %d has 1 digit", number);
	else if (number <= 99)
		printf("The number %d has 2 digits", number);
	else if (number <= 999)
		printf("The number %d has 3 digits", number);

	return 0;
}