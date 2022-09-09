#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will print the last digit of a random gen number
 * and whether it's greater than 5, less than 6 or 0.
 *
 * Return: 0 for a successful program run.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 10)
	{
	printf("Last digit of %d is %d and is less than 6 and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
