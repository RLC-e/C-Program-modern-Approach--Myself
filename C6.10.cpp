#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mm = 1, dd = 1, yy = 1, x = 99, y = 99, z = 99;

	while (mm != 0 && dd != 0 && yy != 0)
	{
		printf("Enter a date (mm/dd/yy):");
		scanf("%d/%d/%d", &mm, &dd, &yy);

		if (mm == 0 && dd == 0 && yy == 0)
		{
			printf("%d/%d/%.2d is the earliest date", y, x, z);
			break;
		}
		if (z > yy)
		{
			z = yy;
			y = mm;
			x = dd;
		}
		if (z == yy && y > mm)
		{
			z = yy;
			y = mm;
			x = dd;
		}
		if (z == yy && y == mm && x > dd)
		{
			z = yy;
			y = mm;
			x = dd;
		}
	}
	return 0;
}