#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool palindrome_check(char a[], int n);

int main()
{
	char ch;
	char a[100];
	int n = 0;

	printf("Enter a message: ");
	do
	{
		ch = getchar();
		if (ch == '\n')
			break;
		if (isalpha(ch))
		{
			ch = tolower(ch);
			a[n++] = ch;
		}
	} while (1);

	if (palindrome_check(a, n))
		printf("Palindrome");
	else
		printf("Not a palindrome");

	return 0;
}

bool palindrome_check(char a[], int n)
{
	for (int i = 0,j = n - 1;i < j;i++, j--)
	{
		if (*(a + i) != *(a + j))
			return false;
	}
	return true;
}