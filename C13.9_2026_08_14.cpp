#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int compute_vowel_cout(const char* sentence);

int main()
{
	char a[100];
	char ch;
	int n = 0;
	printf("Enter a sentence: ");
	do
	{
		ch = getchar();
		if (ch != '\n')
		{
			ch = toupper(ch);
			a[n++] = ch;
		}
		else
		{
			a[n] = '\0';
			break;
		}
	} while (1);

	printf("Your sentence contains %d vowels.", compute_vowel_cout(a));

	return 0;
}

int compute_vowel_cout(const char* sentence)
{
	int n = 0;
	for(int i=0;sentence[i]!='\0';i++)
		if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
			n++;

	return n;
}