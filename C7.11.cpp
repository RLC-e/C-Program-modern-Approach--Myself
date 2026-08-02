#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch, chh;

	printf("Enter a first and last name:");
	ch = getchar();
	chh = ch;

	while (1)
	{
		ch = getchar();
		if (ch == ' ')
			break;
	}

	while (1)
	{
		ch = getchar();

		if (ch == '\n')
		{
			break;
		}
		putchar(ch);
	}
	printf(", %c.", chh);

	return 0;
}