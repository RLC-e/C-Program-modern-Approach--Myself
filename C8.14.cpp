#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[20];
	int i = 0, j = 0,len = 0;

	printf("Enter a sentence: ");
	scanf("%[^\n]",ch);
	printf("Reversal of sentence: ");

	while (ch[len] != '\0')
	{
		len++;
	}


	for (i = len - 1;i > 0;i--)
	{
		if (ch[i] != '\0' && ch[i] == ' ')
		{
			j = i + 1;

			for (;ch[j] != ' ' && ch[j] != '.' && ch[j] != '?' && ch[j] != '!' && ch[j] != '\0';j++)
			{
				printf("%c", ch[j]);
			}

			printf(" ");
		}
	}

	for (i = 0;ch[i] != ' ';i++)
	{
		printf("%c", ch[i]);
	}

	printf("%c", ch[len - 1]);

	return 0;
}