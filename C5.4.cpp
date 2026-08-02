#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float speed;
	printf("Enter the speed:");
	scanf("%.2f", &speed);

	if (speed < 1)
		printf("Calm");
	else if (speed < 3)
		printf("Light air");
	else if (speed < 27)
		printf("Breeze");
	else if (speed < 47)
		printf("Gale");
	else if (speed < 63)
		printf("Strom");
	else
		printf("Hurricane");

	return 0;
	
}
