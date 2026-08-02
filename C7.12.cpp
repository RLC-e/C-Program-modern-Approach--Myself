#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float n, n1, n2, n3;
	char ch1, ch2;

	printf("Enter an expression: ");
	scanf("%f%c%f%c%f", &n1, &ch1, &n2, &ch2, &n3);

	if (ch1 == '+')
		n = n1 + n2;
	else if (ch1 == '-')
		n = n1 - n2;
	else if (ch1 == '*')
		n = n1 * n2;
	else if (ch1 == '/')
		n = n1 / n2;

	if (ch2 == '+')
		n = n + n3;
	else if (ch2 == '-')
		n = n - n3;
	else if (ch2 == '*')
		n = n * n3;
	else if (ch2 == '/')
		n = n / n3;

	printf("Value of expreeion: %f", n);

	return 0;
}