#include <stdio.h>

/**
 * main - Will print its name
 * @argc: The number of command line arguments
 * @argv: The character of arrays
 *
 * Return: 0
 */

int main(__atribute__((unused)) int argc, char *argv[])
{
	int x = 0;

	while (*(argv[0] + x) != '\0')
	{
		putchar(*(argv[0] + x));
		x++;
	}
	putchar('\n');
	return (0);
}
