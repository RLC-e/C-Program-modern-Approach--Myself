#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, m1, m2;
	char ch;

	printf("Enter two fractions separated by operator:");
	scanf("(%d/%d)%c(%d/%d)", &n1, &n2, &ch, &n3, &n4);

	if (ch == '+')
	{
		m1 = n1 * n4 + n2 * n3;
		m2 = n2 * n4;
	}

	if (ch == '-')
	{
		m1 = n1 * n4 - n2 * n3;
		m2 = n2 * n4;
	}

	if (ch == '*')
	{
		m1 = n1 * n3;
		m2 = n2 * n4;
	}

	if (ch == '/')
	{
		m1 = n1 * n4;
		m2 = n2 * n3;
	}

	printf("The result is %d/%d", m1, m2);

	return 0;
}