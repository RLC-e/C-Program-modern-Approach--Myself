#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;

	printf("Enter a number betwen 0 and 32767:");
	scanf("%d", &n);

	int n1, n2, n3, n4, n5;
	n1 = n % 8;
	n2 =(n/8) % 8;
	n3 = (n/64) % 8;
	n4 = (n/512) % 8;
	n5 = (n/4096) % 8;
	printf("In octal,your number is:%d%d%d%d%d", n5, n4, n3, n2, n1);

	return 0;
}
