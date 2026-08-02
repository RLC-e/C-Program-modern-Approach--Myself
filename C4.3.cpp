#define _CRT_SECURE_NO_WARNINGS                   //ds
#include <stdio.h>
int main()
{
	int a, b, c;

	printf("Enter a three-digit number:");
	scanf("%1d%1d%1d",&a,&b,&c);

	printf("The reversal is : ");
	printf("%d%d%d", c, b, a);

	return 0;


}