#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char* word1, const char* word2);

int main()
{
	char a1[20], a2[20];
	char ch;

	printf("Enter first word: ");
	scanf("%s", a1);
	while ((ch = getchar()) != '\n');
	printf("Enter second word: ");
	scanf("%s", a2);

	if (are_anagrams(a1, a2))
	    printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}

bool are_anagrams(const char* word1, const char* word2)
{
	int count[26] = { 0 };
	for (int i = 0;word1[i]!= '\0';i++)
		count[tolower(word1[i]) - 'a']++;
	for (int i = 0;word2[i]!= '\0';i++)
		count[tolower(word2[i]) - 'a']--;

	for (int i = 0;i < 26;i++)
		if (count[i] != 0)
			return false;
	return true;
}