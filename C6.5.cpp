#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, y, x, z = 0;
	float m = 0.1f;

	printf("Enter a number:");
	scanf("%d", &n);
	x = n;
	y = n;

	do
	{
		n = n / 10;
		m = m * 10;
	} while (n > 0);

	do
	{
		y = y % 10;
		x = x / 10;
		z = z + y * m;
		y = x;
		m = m / 10;

	} while (x > 0);

	printf("The reversal is:%d", z);

	return 0;
}

//while (n>0)
//{ 
// rev = rev * 10 = (n % 10);
// n = n / 10;
//}









