#include "main.h"

/**
 * puts_half - will print half of a sting, with a new line
 * @str: the string to be printed.
 */

void puts_half(char *str)
{
	int x, n, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else if (x % 2)
	{
		for (n = (x - 1) / 2; n < x - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
