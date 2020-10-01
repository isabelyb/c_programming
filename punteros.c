#include <stdio.h>

int main()
{
	int number = 200;
	int * pointToNumber = &number;

	printf("%p, %d\n", pointToNumber, *pointToNumber);
}

