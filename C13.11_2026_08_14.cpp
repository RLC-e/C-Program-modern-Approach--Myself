#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double compute_average_word_length(const char* sentence);

int main()
{
	char a[100];
	char ch;
	int i = 0;

	printf("Enter a sentenece:");
	while (1)
	{
		ch = getchar();
		if (ch != ',')
			a[i++] = ch;
		if (ch == '.')
		{
			a[i] = '\0';
			break;
		}
	}
	printf("Average word length: %.1f", compute_average_word_length(a));

	return 0;
}

double compute_average_word_length(const char* sentence)
{
	double sum = 0.0;
	int i = 0, n = 1;
	for (;sentence[i] != '.';i++)
	{
		if (sentence[i] != ' ')
			sum++;
		else
			n++;
	}
	return sum / n;
}