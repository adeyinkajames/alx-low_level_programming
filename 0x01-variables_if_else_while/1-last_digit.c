#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greaterthan 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d is lessthan 6 and not 0\n", n, a);
i	}
	return (0);
}