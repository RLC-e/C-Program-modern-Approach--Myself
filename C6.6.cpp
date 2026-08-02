#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m = 2;

	printf("Enter a number:");
	scanf("%d", &n);

	while (n >= m * m)
	{
		printf("%d\n", m * m);
		m = m + 2;
	}
	return 0;
}