#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(char* message);

int main()
{
	char a[100];

	printf("Enter a message: ");
	scanf("%s", a);
	printf("The reverse is ");
	reverse(a);

	return 0;
}

void reverse(char* message)
{
	int i = 0;
	char temp;
	char* p, * q;

	for (i = 0;message[i] != '\0';i++);
	p = message;
	q = &message[i - 1];

	for (;p <= q;p++, q--)
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}
	printf("%s", message);
}