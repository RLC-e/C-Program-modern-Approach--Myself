#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int sum = 0, n;

	printf("Enter a word:");

	while (1)
	{
		ch = getchar();
		ch = toupper(ch);

		if (ch != '\n')
		{
			if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
			{
				n = 1;
				sum += n;
			}
			else if (ch == 'D' || ch == 'G')
			{
				n = 2;
				sum += n;
			}
			else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
			{
				n = 3;
				sum += n;
			}
			else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
			{
				n = 4;
				sum += n;
			}
			else if (ch == 'K')
			{
				n = 5;
				sum += n;
			}
			else if (ch == 'J' || ch == 'X')
			{
				n = 8;
				sum += n;
			}
			else if (ch == 'Q' || ch == 'Z')
			{
				n = 10;
				sum += n;
			}
		}
		else
		{
			printf("Scrabble value:%d", sum);
			break;
		}
	}
	return 0;
}