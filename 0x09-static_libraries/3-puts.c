#include "main.h"

/**
 * _puts - Will print a string with a new line to stdout
 * @str: The pointer to the string to be printed
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
