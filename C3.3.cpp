#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int  main()
{
	int prefix;
	int identifier;
	int code;
	int number;
	int digit;

	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);

	printf("GS1 prefix:%d\n", prefix);
	printf("Group identifier:%d\n", identifier);
	printf("publisher code:%d\n", code);
	printf("Item number:%d\n", number);
	printf("Check digit:%d\n", digit);

	return 0;
}