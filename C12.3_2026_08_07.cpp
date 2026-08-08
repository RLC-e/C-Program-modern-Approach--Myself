#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void opposite(char *a, int n);

int main()
{
	char ch;
	char a[100];
	int n = 0;

	printf("Enter a message: ");
	do
	{
		ch = getchar();
		a[n++] = ch;
	} while (ch != '\n');

	printf("Reverasal is: ");
	opposite(a, n);

	return 0;
}

void opposite(char *a, int n)
{
	for (int i = n - 2;a + i >= a;i--)
		printf("%c", *(a + i));
}