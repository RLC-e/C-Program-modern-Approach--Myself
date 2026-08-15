#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char ch[20], smallest_word[20], largest_word[20];
	int len;

	printf("Enter a word: ");
	scanf("%s", ch);
	strcpy(smallest_word, ch);
	strcpy(largest_word, ch);
	len = strlen(ch);

	while (len != 4)
	{
		printf("Enter a word: ");
		scanf("%s", ch);

		len = strlen(ch);

		if (strcmp(smallest_word, ch) > 0)
			strcpy(smallest_word, ch);

		if (strcmp(ch, largest_word) > 0)
			strcpy(largest_word, ch);
	}

	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largestword: %s\n", largest_word);

	return 0;
}