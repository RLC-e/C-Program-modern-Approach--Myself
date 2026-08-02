#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch1[15], ch2[15];
	int	num1[26], num2[26];
	int i = 0, j = 0, len1 = 0, len2 = 0;

	printf("Enter first word: ");
	scanf("%[^\n]", ch1);
	while (getchar() != '\n');
	printf("Enter second word: ");
	scanf("%[^\n]", ch2);

	while (ch1[len1] != '\0')
	{
		len1++;
	}
	while (ch2[len2] != '\0')
	{
		len2++;
	}

	for (i = 0;i < len1;i++)
	{
		ch1[i] = tolower(ch1[i]);
	}
	for (j = 0;j < len2;j++)
	{
		ch2[j] = tolower(ch2[j]);
	}

	for (i = 0;i < 26;i++)
	{
		num1[i] = 0;
	}
	for (j = 0;j < 26;j++)
	{
		num2[j] = 0;
	}

	for (i = 0;i < len1;i++)
	{
		num1[ch1[i] - 'a'] += 1;
	}
	for (j = 0;j < len2;j++)
	{
		num2[ch2[j] - 'a'] += 1;
	}

	for (i = 0,j = 0;i < 26 && j < 26; i++, j++)
	{
		num1[i] -= num2[j];
	}

	for (i = 0;i < 26;i++)
	{
		if (num1[i] != 0)
		{
			printf("The words are not anagrams.");
			break;
		}
	}
	if (i == 26)
		printf("The words are anagrams.");

	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>

//int main()
//{
	//int count[26] = { 0 };
	//char ch;

	//printf("Enter first word: ");
	//while ((ch = getchar()) != '\n') {
		//if (isalpha(ch)) count[tolower(ch) - 'a']++;
	//}

	//printf("Enter second word: ");
	//while ((ch = getchar()) != '\n') {
		//if (isalpha(ch)) count[tolower(ch) - 'a']--;
	//}

	//for (int i = 0; i < 26; i++) {
		//if (count[i] != 0) {
			//printf("The words are not anagrams.\n");
			//return 0;
		//}
	//}
	//printf("The words are anagrams.\n");
	//return 0;
//}