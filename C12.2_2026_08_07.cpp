#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool palindrome_check(char a[], char *p);

int main()
{
	char ch;
	char a[100];
	char* p = a;

	printf("Enter a message: ");
	do
	{
		ch = getchar();
		if (ch == '\n')
			break;
		if (isalpha(ch))
		{
			ch = tolower(ch);
		    *p++ = ch;
	    }
	} while (1);

	if (palindrome_check(a, p))
		printf("Palindrome");
	else
		printf("Not a palindrome");

	return 0;
}

bool palindrome_check(char a[], char*p)
{
	char* j, * k;
	for (j = a, k = p - 1;j < k;j++, k--)
	{
		if (*j != *k)
			return false;
	}
	return true;
}