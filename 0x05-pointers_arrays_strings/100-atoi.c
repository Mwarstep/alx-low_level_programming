#include "main.h"

/**
 * _atoi - will convert a string in to an integer
 * @s: the string to be converted
 * Return: the integer converted from string
 */

int _atoi(char *s)
{
	int x, y, z, a, len, dig;

	x = 0;
	y = 0;
	z = 0;
	a = 0;
	len = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && a == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			dig = s[x] - '0';
			if (y % 2)
				dig = -dig;
			z = z * 10 + dig;
			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}
	if (a == 0)
		return (0);

	return (z);
}
