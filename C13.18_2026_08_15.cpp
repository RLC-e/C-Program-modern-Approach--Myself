#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const char* month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

void turn(int mm, int dd, int yyyy);

int main()
{
	int mm,dd,yyyy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You entered the date ");
	turn(mm, dd, yyyy);

	return 0;
}

void turn(int mm, int dd, int yyyy)
{
	printf("%s ", month[mm - 1]);
	printf("%d, %d", dd, yyyy);
}