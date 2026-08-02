#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int n = 0;
	printf("Enter a sentence: ");

	while (1)
	{
		ch = getchar();
		ch = toupper(ch);
		
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			n = n + 1;
		}
		if (ch == '\n')
		{
			break;
		}
	}
	printf("Your sentence contains %d vowels.", n);

	return 0;
}
