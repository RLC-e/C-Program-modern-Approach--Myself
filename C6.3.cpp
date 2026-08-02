#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, yu, GCD, m1, n1;
	printf("Enter a fraction:");
	scanf("%\d/%d", &m, &n);
	m1 = m, n1 = n;

	while (n != 0)
	{
		yu = m % n;
		m = n;
		n = yu;
	}
	GCD = m;

	printf("In lowest terms:%d/%d", m1 / GCD, n1 / GCD);

	return 0;
}