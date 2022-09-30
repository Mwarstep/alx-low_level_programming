#include <stdio.h>

/**
 * main - will print all arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 for a successful prog run.
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
