#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, n1, n2;
	printf("Enter a two-digit number:");
	scanf("%d", &n);

	n1 = n / 10;
	n2 = n % 10;

	if (n <= 19 && n >= 10)
	{

		switch (n)
		{
		case 10: printf("You enter the number ten");break;
		case 11: printf("You enter the number elevent");break;
		case 12: printf("You enter the number twelve");break;
		case 13: printf("You enter the number thirthteen");break;
		case 14: printf("You enter the number fourteen");break;
		case 15: printf("You enter the number fifteen");break;
		case 16: printf("You enter the number sixteen");break;
		case 17: printf("You enter the number seventeen");break;
		case 18: printf("You enter the number eighteen");break;
		case 19: printf("You enter the number ninteen");break;
		}
	}
	else
	{
		switch (n1)
		{
		case 2: printf("You enter the number twenty");break;
		case 3: printf("You enter the number thirty");break;
		case 4: printf("You enter the number forty");break;
		case 5: printf("You enter the number fifty");break;
		case 6: printf("You enter the number sixty");break;
		case 7: printf("You enter the number seventy");break;
		case 8: printf("You enter the number eighty");break;
		case 9: printf("You enter the number ninty");break;
		}

		switch (n2)
		{
		case 0: printf("");break;
		case 1: printf("-one");break;
		case 2: printf("-two");break;
		case 3: printf("-three");break;
		case 4: printf("-four");break;
		case 5: printf("-five");break;
		case 6: printf("-six");break;
		case 7: printf("-seven");break;
		case 8: printf("-eight");break;
		case 9: printf("-nine");break;
		}
	}
	return 0;
}
