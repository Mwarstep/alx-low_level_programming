#include <stdio.h>
#include <stdlib.h>

/**
 * main - Will add two positive numbers
 * @argc: The number of command line arguments
 * @argv: The character of arrays
 *
 * Return: 0 when both numbers pass or 1 for an error
 */

int main(int argc, char *argv[])
{
	int x, y;
	unsigned long int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; *(argv[x] + y) != '\0'; y++)
			{
				if (argv[x][y] >= '0' && argv[x][y] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
		printf("%lu\n", sum);
	}
	return (0);
}
