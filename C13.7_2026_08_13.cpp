#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, n1, n2;
	const char* ch[] = { "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	const char* ch1[] = { "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	const char* ch2[] = { "","-one","-two","-three","-four","-five","-six","-seven","-eight","-nine"};
	printf("Enter a two-digit number:");
	scanf("%d", &n);

	n1 = n / 10;
	n2 = n % 10;

	if (n >= 10 && n <= 19)
		printf("%s", ch[n - 10]);
	else
		printf("%s%s", ch1[n1 - 2], ch2[n2]);

	return 0;
}
