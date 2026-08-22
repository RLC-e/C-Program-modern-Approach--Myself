#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date { int month, day, year; } d1, d2;
int compare_dates(struct date d1, struct date d2);

int main()

{
	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yy):");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

	if(compare_dates(d1,d2) < 0)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
	else
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);

	return 0;
}

int compare_dates(struct date d1, struct date d2)
{
	if (d1.year != d2.year)
		return d1.year < d2.year ? -1 : 1;
	if (d1.month != d2.month)
		return d1.month < d2.month ? -1 : 1;
	if (d1.day != d2.day)
		return d1.day < d2.day ? -1 : 1;

	return 0;
}