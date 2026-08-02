#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[80];
	int n, i, len = 0;

	printf("Enter message to be encrypted: ");
	scanf("%[^\n]", ch);
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);
	printf("Encrypted message: ");

	while (ch[len] != '\0')
		len++;
	i = len - 1;
	len = len - 1;

	for (;ch[i] != '\0';i--)
	{
		if (ch[i] >= 65 && ch[i] <= 90)
		{
			ch[i] = (((ch[i] - 'A') + n) % 26 + 'A');
		}
		else if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = (((ch[i] - 'a') + n) % 26 + 'a');
		}

		if (i == 0)
			break;
	}

	for (i=0;i<=len;i++)
	{
		printf("%c", ch[i]);
	}

	return 0;
}