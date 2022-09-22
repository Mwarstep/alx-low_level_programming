#include "main.h"

/**
 * _strcat - Will concantenate two strings.
 * @dest: The string to append to.
 * @src: The string to add.
 *
 * Return: Pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
