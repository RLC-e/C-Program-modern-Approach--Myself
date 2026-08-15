#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[30][20];
	char ch;
	int i = 0, j = 0, n = 0;

	printf("Enter a sentence: ");
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		else if (ch != ' ' && ch != '.' && ch != '?' && ch != '!')
			a[i][j++] = ch;
		else if (ch == ' ')
		{
			a[i++][j] = '\0';
			j = 0;
		}
		else
		{
			a[i++][j] = '\0';
			j = 0;
			a[i][0] = ch;
			a[i][1] = '\0';
			n = i;
			break;
		}
	}
	printf("Reversal of sentence: ");
	for (i = i - 1;i >= 0;i--)
	{
		for (int j = 0;a[i][j] != '\0';j++)
		{
			printf("%c", a[i][j]);
		}
		if (i == 0)
		{
			printf("%c", a[n][0]);
			break;
		}
		printf(" ");
	}

	return 0;
}