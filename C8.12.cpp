#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch[15];
	int i = 0,value = 0,n = 0 ;
	printf("Enter a word: ");
	scanf("%s", ch);

	for (i = 0;ch[i] != '\0';i++)
	{
		ch[i] = toupper(ch[i]);
	}

	for (i = 0;ch[i] != '\0';i++)
	{
		if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'L' || ch[i] == 'N' || ch[i] == 'O' || ch[i] == 'R' || ch[i] == 'S' || ch[i] == 'T' || ch[i] == 'U')
			value = value + 1;
		else if (ch[i] == 'D' || ch[i] == 'G')
			value = value + 2;
		else if (ch[i] == 'B' || ch[i] == 'C' || ch[i] == 'M' || ch[i] == 'P')
			value = value + 3;
		else if (ch[i] == 'F' || ch[i] == 'H' || ch[i] == 'V' || ch[i] == 'W' || ch[i] == 'Y')
			value = value + 4;
		else if (ch[i] == 'K')
			value = value + 5;
		else if (ch[i] == 'J' || ch[i] == 'X')
			value = value + 8;
		else if (ch[i] == 'Q' || ch[i] == 'Z')
			value = value + 10;
	}
	printf("Scrabble value: %d", value);

	return 0;
}