#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[20];
	char ch;
	char* p = a;
	char* q;

	printf("Enter a sentence: ");
	
	do
	{
		ch = getchar();
		if (ch == '\n')
			break;
		*p++ = ch; 
	} while (1);

	p = p - 1;
	printf("Reversal of sentence: ");

	char* len = p;

	for (;p >= a;p--)
	{
		if (*p == ' ')
		{
			q = p + 1;

			for (;*q != ' ' && *q != '.' && *q != '?' && *q != '!';q++)
				printf("%c", *q);

			printf(" ");
		}
	}

	for (char *p = a;*p != ' ';p++)
		printf("%c", *p);

	printf("%c", *len);

	return 0;
}