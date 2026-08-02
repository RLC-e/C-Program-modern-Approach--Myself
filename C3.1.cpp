#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

int main()
{
	int mm;
	int dd;
	int yyyy;

	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&mm,&dd,&yyyy);

	printf("You enttered the date %d%.2d%。2d", yyyy, mm, dd);

	return 0;

}