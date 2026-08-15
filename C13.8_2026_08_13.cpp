#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_scrabble_value(const char* word);

int main()
{
	char a[20];

	printf("Enter a word:");
	scanf("%s", a);
	for (int i = 0;a[i] != '\0';i++)
		a[i] = toupper(a[i]);
	printf("Scrabble value:%d", compute_scrabble_value(a));

	return 0;
}

int compute_scrabble_value(const char* word)
{
	int i = 0;
	int sum = 0, n = 0;
	for(i = 0;*(word + i)!='\0';i++)

		if (*(word + i) != '\n')
		{
			if (*(word + i) == 'A' || *(word + i) == 'E' || *(word + i) == 'I' || *(word + i) == 'L' || *(word + i) == 'N' || *(word + i) == 'O' || *(word + i) == 'R' || *(word + i) == 'S' || *(word + i) == 'T' || *(word + i) == 'U')
			{
				n = 1;
				sum += n;
			}
			else if (*(word + i) == 'D' || *(word + i) == 'G')
			{
				n = 2;
				sum += n;
			}
			else if (*(word + i) == 'B' || *(word + i) == 'C' || *(word + i) == 'M' || *(word + i) == 'P')
			{
				n = 3;
				sum += n;
			}
			else if (*(word + i) == 'F' || *(word + i) == 'H' || *(word + i) == 'V' || *(word + i) == 'W' || *(word + i) == 'Y')
			{
				n = 4;
				sum += n;
			}
			else if (*(word + i) == 'K')
			{
				n = 5;
				sum += n;
			}
			else if (*(word + i) == 'J' || *(word + i) == 'X')
			{
				n = 8;
				sum += n;
			}
			else if (*(word + i) == 'Q' || *(word + i) == 'Z')
			{
				n = 10;
				sum += n;
			}
		}
	return sum;
}