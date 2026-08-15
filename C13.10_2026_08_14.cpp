#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reserve_name(char* name);

int main()
{
	char a[20];
	int i = 0;
	char ch;

	printf("Enter a first and last name:");
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
		{
			a[i] = '\0';
			break;
		}
		else
			a[i++] = ch;
	}

	reserve_name(a);

	return 0;
}

void reserve_name(char* name)
{
	int i = 0;
	char Original;
	while (1)
	{
		if (name[i] != ' ')
		{
			Original = name[i];
			break;
		}
		else
			i++;
	}

	while (name[i] != ' ')
		i++;

	while (name[i] == ' ')
		i++;

	while (name[i] != ' ' && name[i] != '\0')
		putchar(name[i++]);

	printf(", %c.", Original);
}