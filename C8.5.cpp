#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main()
{
	int i, low_rate, num_years, year, month;
	double value[5];

	printf("Enter interest rate:");
	scanf("%d", &low_rate);
	printf("Enter number of years:");
	scanf("%d", &num_years);
	year = 1;

	printf("\nyear");
	for (i = 0;i < NUM_RATES;i++)
	{
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (month = 1;month <= num_years * 12;month++)
	{
		if (month % 12 == 0)
		{
			printf("%3d   ", year);
			year += 1;
		}

		for (i = 0;i < NUM_RATES;i++)
		{
			value[i] += (low_rate + i) / 100.0 / 12.0 * value[i];

			if (month % 12 == 0)
			{
				printf("%7.2f", value[i]);

				if (i == 4)
				{
					printf("\n");
				}
			}

		}

	}

	return 0;

}