#include "main.h"

/**
 * _strlen - will return the length of a string.
 * @s: string to be evaluated.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
