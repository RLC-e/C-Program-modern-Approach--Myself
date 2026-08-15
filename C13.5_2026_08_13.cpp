#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int sum = 0;
	int n;
	for (int i = argc - 1;i > 0;i--)
	{
		n = atoi(argv[i]);
		sum += n;
	}
	printf("Total: %d", sum);

	return 0;
}