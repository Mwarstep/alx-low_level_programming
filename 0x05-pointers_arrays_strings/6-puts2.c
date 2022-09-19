#include "main.h"

/**
 * puts2 - will print every other character of a string
 * starting with the 1st character
 * @str: the string to print the characters
 */

void puts2(char *str)
{
	int x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
