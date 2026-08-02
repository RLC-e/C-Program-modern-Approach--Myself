#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("Enter phone number [(xxx) xxx-xxxx]:");
	scanf("(%d) %d-%d", &a, &b, &c);

	printf("You entered %d.%d.%d", a, b, c);

	return 0;
}