#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int temp[10];
int digit = 0;
int position = 0;
char ch;
char digits[3][4 * MAX_DIGITS];


int main()
{
	clear_digits_array();

	printf("Enter a number: ");
	do
	{
		ch = getchar();
		if (ch >= '0' && ch <= '9')
		{
			temp[digit++] = ch - '0';
			if (digit >= 10)
				break;
		}

	} while (ch != '\n');

	process_digit(digit, position);
	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4 * MAX_DIGITS;j++)
			digits[i][j] = ' ';
	}
}

void process_digit(int digit, int position)
{
	for (int i = 0;i < digit;i++)
	{ 
		switch (temp[i])
		{
		case 0: case 2: case 3: case 5: case 6: case 7: case 8: case 9:
			position = 4 * i + 1;
			digits[0][position] = '_';
			break;
		}

		switch (temp[i])
		{
		case 0: case 4: case 5: case 6: case 8: case 9:
			position = 4 * i;
			digits[1][position] = '|';
			break;
		}

		switch (temp[i])
		{
		case 2: case 3: case 4: case 5: case 6: case 8: case 9:
			position = 4 * i + 1;
			digits[1][position] = '_';
			break;
		}

		switch (temp[i])
		{
		case 0: case 1: case 2: case 3: case 4: case 7: case 8: case 9:
			position = 4 * i + 2;
			digits[1][position] = '|';
			break;
		}

		switch (temp[i])
		{
		case 0: case 2: case 6: case 8:
			position = 4 * i;
			digits[2][position] = '|';
			break;
		}

		switch (temp[i])
		{
		case 0: case 2: case 3: case 5: case 6: case 8: case 9:
			position = 4 * i + 1;
			digits[2][position] = '_';
			break;
		}

		switch (temp[i])
		{
		case 0: case 1: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
			position = 4 * i + 2;
			digits[2][position] = '|';
			break;
		}
	}
}

void print_digits_array(void)
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4 * MAX_DIGITS;j++)
		{
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}