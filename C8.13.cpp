#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1[20];
	char ch2[20];
	int i = 0;

	printf("Enter a first and last name: ");
	scanf("%s %s", ch1, ch2);
	printf("You entered the name: ");

	for (i = 0;ch2[i] != '\0';i++)
	{
		printf("%c", ch2[i]);
	}

	printf(", %c", ch1[0]);

	return 0;
}