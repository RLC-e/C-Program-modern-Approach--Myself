#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void opposite(char a[], char *p);

int main()
{
	char ch;
	char a[100];
	char *p = a;

	printf("Enter a message: ");
	do
	{
		ch = getchar();
		*p++ = ch;
	} while (ch != '\n');

	printf("Reverasal is: ");
	opposite(a, p);

	return 0;
}

void opposite(char a[], char *p)
{
	char* q;
	for (q = p - 2;q >= a;q--)
		printf("%c", *q);
}