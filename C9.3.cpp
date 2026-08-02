#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main()

{
	srand((unsigned)time(NULL));

	char walk[10][10];
	generate_random_walk(walk);
	print_array(walk);
	
	return 0;
}

void generate_random_walk(char walk[10][10])
{
	int i = 0, j = 0, n = 0;
	int dr[4] = { -1,1,0,0 };
	int dc[4] = { 0,0,1,-1 };

	for (i = 0;i < 10;i++)
	{
		for (j = 0;j < 10;j++)
		{
			walk[i][j] = '.';
		}
	}

	i = 0, j = 0;
	walk[i][j] = 'A';
	char ch = 'B';

	while (ch <= 'Z')
	{
		int group[4] = { 0,1,2,3 };

		for (int i = 3;i > 0;i--)
		{
			int rand_pos = rand() % (i + 1);
			int temp = group[i];
			group[i] = group[rand_pos];
			group[rand_pos] = temp;
		}

		bool moved = false;

		for (n = 0;n < 4;n++)
		{
			int d = group[n];
			int new_dr = i + dr[d];
			int new_dc = j + dc[d];

			if (new_dr >= 0 && new_dr < 10 && new_dc >= 0 && new_dc < 10 && walk[new_dr][new_dc] == '.')
			{
				i = new_dr;
				j = new_dc;
				walk[i][j] = ch;
				moved = true;
				break;
			}
		}
		if (!moved)
			break;

		ch++;
	}
}

void print_array(char walk[10][10])
{
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			printf("%c", walk[i][j]);
		}
		printf("\n");
	}
}
