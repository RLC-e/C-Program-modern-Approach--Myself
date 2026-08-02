#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	float n = 0, sum = 0 ,i = 0;

	printf("Enter a sentenece:");

	while (1)
	{
		ch = getchar();

		if (ch == ' ' || ch == ',')
		{
			sum = sum + n;
			n = -1;
			i++;
		}
		n++;

		if (ch == '.')
		{
			sum = sum + n;
			i++;
			break;
		}
	}
	printf("Average word length: %.1f", sum / i);

	return 0;
}