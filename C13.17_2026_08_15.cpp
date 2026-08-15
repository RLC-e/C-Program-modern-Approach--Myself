#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(const char* message);

int main()
{
	char ch;
	char a[100];
	char* p = a;

	printf("Enter a message: ");
	while ((ch = getchar()) != '\n')  
		if (isalpha(ch))
			*p++ = tolower(ch);
	*p = '\0';

	if (is_palindrome(a))
		printf("Palindrome");
	else
		printf("Not a palindrome");

	return 0;
}

bool is_palindrome(const char* message)
{
	int i = 0;
	const char* p, * q;
	for (i = 0;message[i] != '\0';i++);
	p = message;
	q = &message[i - 1];

	for (;p <= q;p++, q--)
	{
		if (*p != *q)
			return false;
	}
	return true;
}