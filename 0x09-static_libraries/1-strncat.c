#include "main.h"

/**
 * _strncat - Will concatenate n bytes from a string to anothe
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes of str to concatenate
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
