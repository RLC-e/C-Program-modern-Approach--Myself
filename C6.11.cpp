#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m = 1, mm = 1, mmm = 2;
	float x = 1.0f;

	printf("Enter a number:");
	scanf("%d", &n);
	
	while (m <= n)
	{
		x = x + (1.0f / mm);

		if (m<=n)
		{
			mm = mm * mmm;
			mmm++;
		}
		m++;
	}
	printf("e: %f", x);

	return 0;
}

// for (int i = 1;i <= n; i++)
// {
//  term = term / i;
//  e += term;
// }

