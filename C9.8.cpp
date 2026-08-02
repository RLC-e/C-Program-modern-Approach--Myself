#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice();
bool play_game();

int main()
{
	srand((unsigned)time(NULL));

	char ch = 'y';
	int wins = 0;
	int losses = 0;

	while (ch == 'y')
	{
		if (play_game())
		{
			printf("You win!\n");
			printf("\n");
			wins++;
		}
		else
		{
			printf("You lose!\n");
			printf("\n");
			losses++;
		}

		printf("Play again?");
		scanf("%c", &ch);
		printf("\n");
		while (getchar() != '\n');
	}
	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice()
{
	int n1, n2;

	n1 = rand() % 6 + 1;
	n2 = rand() % 6 + 1;

	return n1 + n2;
}

bool play_game()
{
	int point;
	int n = roll_dice();
	if (n == 7 || n == 11)
	{
		printf("You rolled: %d\n", n);
		return true;
	}
	else if (n == 2 || n == 3 || n == 12)
	{
		printf("You rolled: %d\n", n);
		return false;
	}
	else
	{
		printf("You rolled: %d\n", n);
		point = n;
		printf("Your point is: %d\n", point);
	}

	while (1)
	{
		n = roll_dice();

		if (n == point)
		{
			printf("You rolled: %d\n", n);
			return true;
		}
		else if (n == 7)
		{
			printf("You rolled: %d\n", n);
			return false;
		}
		printf("You rolled: %d\n", n);
	}
}




















































































