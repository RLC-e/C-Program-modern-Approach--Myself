//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdbool.h>
//
//int main()
//{
//	int i = 0, j = 0, n, t = 0;
//	char R[10][10];
//	bool x = true;
//
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			R[i][j] = '.';
//		}
//	}
//
//	srand((unsigned)time(NULL));
//	
//	R[i][j] = 'A';
//	for (n = 1;n < 26;n++)
//	{
//		
//		for (;x;)                                      //
//		{
//			int direction = rand() % 4;
//			int direction_num[4] = { 0,0,0,0 };
//			if (direction_num[0] == 1 && direction_num[1] == 1 && direction_num[2] == 1 && direction_num[3] == 1)
//				break;
//
//			if (direction == 0)
//			{
//				i -= 1;
//				if (i < 0)
//				{
//					i += 1;
//					x = true;
//					direction_num[0] = 1;
//				}
//				else
//				{
//					x = false;
//					n -= 1;
//				}
//			}
//			if (direction == 1)
//			{
//				j += 1;
//				if (j > 10)
//				{
//					j -= 1;
//					x = true;
//					direction_num[1] = 1;
//				}
//				else
//				{
//					x = false;
//					n -= 1;
//				}
//			}
//			if (direction == 2)
//			{
//				i += 1;
//				if (i > 10)
//				{
//					i -= 1;
//					x = true;
//					direction_num[2] = 1;
//				}
//				else
//				{
//					x = false;
//					n -= 1;
//				}
//			}
//			if (direction == 3)
//			{
//				j -= 1;
//				if (j < 0)
//				{
//					j += 1;
//   				x = true;
//					direction_num[3] = 1;
//				}
//				else
///				{
//					x = false;
//					n -= 1;
//				}
//			}
//			                                                          //bian jie pan ding
//			if (R[i][j] == '.')
///			{
//				R[i][j] = 'A' + n;
//			}
//			else if (direction == 0)
//			{
//				i += 1;
//				direction_num[0] = 1;
//			}
//			else if (direction == 1)
//			{
//				j -= 1;
//				direction_num[1] = 1;
///			}
//			else if (direction == 2)
//			{
//				i += 1;
//				direction_num[2] = 1;
//     		}
//			else if (direction == 3)
//			{
//				j -= 1;
//				direction_num[3] = 1;
//			}
//
//			if (direction_num[0] == 1 && direction_num[1] == 1 && direction_num[2] == 1 && direction_num[3] == 1)
//				break;
//
//			direction_num[0] = 1;
//			direction_num[1] = 1;
//			direction_num[2] = 1;
//			direction_num[3] = 1;
//		}
//	}
//	
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			printf("%c", R[i][j]);
//			if (j == 9)
//				printf("\n");
//		}
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()

{
	char R[10][10];
	int i = 0, j = 0, n = 0;
	int dr[4] = { -1,1,0,0 };
	int dc[4] = { 0,0,1,-1 };

	for (i = 0;i < 10;i++)
	{
		for (j = 0;j < 10;j++)
		{
			R[i][j] = '.';
		}
	}

	i = 0, j = 0;
	R[i][j] = 'A';
	char ch = 'B';

	srand((unsigned)time(NULL));

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
			int d = group[n];                   //4 3 2 1
			int new_dr = i + dr[d];             //-1 1 0
			int new_dc = j + dc[d];             //-1 1 0

			if (new_dr >= 0 && new_dr < 10 && new_dc >= 0 && new_dc < 10 && R[new_dr][new_dc] == '.')
			{
				i = new_dr;
				j = new_dc;
				R[i][j] = ch;
				moved = true;
				break;
			}
		}
			if (!moved)
				break;
		
			ch++;
	}

		for (int i = 0;i < 10;i++)
		{
			for (int j = 0;j < 10;j++)
			{
				printf("%c", R[i][j]);
			}
			printf("\n");
		}
		return 0;
	

}


























