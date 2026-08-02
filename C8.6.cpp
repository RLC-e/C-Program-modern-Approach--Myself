#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char B1FF[100];
	int i ;
	
	printf("Enter message:");
	scanf("%[^\n]", B1FF);
	printf("In B1FF-speak:");

	for (i = 0;B1FF[i] != '\0';i++)
	{
		if (B1FF[i] != ' ')
		{
			if (B1FF[i] >= 97 && B1FF[i] <= 122)
			{
				B1FF[i] -= 32;
			}

			if (B1FF[i] == 'e' || B1FF[i] == 'E')
			{
				B1FF[i] = '3';
			}

			if (B1FF[i] == 'i' || B1FF[i] == 'I')
			{
				B1FF[i] = '1';
			}

			if (B1FF[i] == 's' || B1FF[i] == 'S')
			{
				B1FF[i] = '5';
			}

			if (B1FF[i] == 'o' || B1FF[i] == 'O')
			{
				B1FF[i] = '0';
			}

			if (B1FF[i] == 'a' || B1FF[i] == 'A')
			{
				B1FF[i] = '4';
			}
		}
		printf("%c", B1FF[i]);
	}
	printf("!!!!!!!!!!");

	return 0;
}