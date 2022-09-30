#include <stdio.h>
#include <stdlib.h>

/**
 * main - Will multiply two numbers
 * @argc: The number of command line arguments
 * @argv: The character of arrays
 *
 * Return: The product result
 */

int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;

	printf("%d\n", prod);
	return (0);
}
