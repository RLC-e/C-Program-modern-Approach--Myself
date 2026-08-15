#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void encrypt(char* message, int shift);

int main()
{
	char ch[80];
	int n, i, len = 0;

	printf("Enter message to be encrypted: ");
	scanf("%[^\n]", ch);
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	encrypt(ch, n);
	printf("Encrypted message: %s",ch);

	return 0;
}
void encrypt(char* message, int shift)
{
	for (int i = 0;message[i] != '\0';i++)
	{
		if (message[i] >= 65 && message[i] <= 90)
		{
			message[i] = (((message[i] - 'A') + shift) % 26 + 'A');
		}
		else if (message[i] >= 97 && message[i] <= 122)
		{
			message[i] = (((message[i] - 'a') + shift) % 26 + 'a');
		}
	}

}
