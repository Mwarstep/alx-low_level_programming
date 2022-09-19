#include "main.h"

/**
 * _strcpy - will copy the sting pointed to by src plus terming
 * the null byte (\0) to the buffer pointed to by dest.
 * @dest: the pointer to the buffer where we we will copy the string to
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}
