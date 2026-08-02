#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, yu;

	printf("Enter two integers:");
	scanf("%d %d", &m, &n);

	for (;n != 0;)
	{
		yu = m % n;
		m = n;
		n = yu;

		if (n == 0)
		{
			printf("Gretest common divisor:%d", m);
		}

	}
	return 0;
}
