//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n1, n2;
//	printf("Enter a 24-hour time:");
//	scanf("%d:%d", &n1, &n2);
//
//	if (n1 < 12)
//		printf("Equivalent 12-hour time: %d:%d AM", n1, n2);
//	else if (n1 == 12)
//		printf("Equivalent 12-hour time: 12:%d PM", n2);
//	else if (n1 < 24)
//		printf("Equivalent 12-hour time: %d:%d PM", n1 - 12, n2);
//	else if (n1 == 24)
//		printf("Equivalent 12-hour time: 0:%d AM", n2);
//
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;
	printf("Enter a 24-hour time:");
	scanf("%d:%d", &n1, &n2);

	if (n1 == 0 || n1 == 24)
		printf("Equivalent 12-hour time: 12:%.2d AM", n2);
	else if (n1 < 12)
		printf("Equivalent 12-hour time: %d:%.2d AM", n1, n2);
	else if (n1 == 12)
		printf("Equivalent 12-hour time: 12:%.2d PM", n2);
	else if (n1 < 24)
		printf("Equivalent 12-hour time: %d:%.2d PM", n1 - 12, n2);

	return 0;
}

