#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	printf("Enter numerical grade:");
	scanf("%d", &n1);

	n2 = n1 / 10;
	switch (n2)
	{
	case 10: printf("Letter grade:A");
		break;
	case 9: printf("Letter grade:A");
		break;
	case 8: printf("Letter grade:B");
		break;
	case 7: printf("Letter grade:C");
		break;
	case 6: printf("Letter grade:D");
		break;
	case 5: case 4: case 3: case 2: case 1: case 0:
		printf("Letter grade:F");
		break;
	}
	return 0;
}
