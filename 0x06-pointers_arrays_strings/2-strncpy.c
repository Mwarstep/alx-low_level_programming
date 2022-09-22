#include "main.h"

/**
 * _strncpy - Will copy a string
 * @dest: The destination string.
 * @src: The Source
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the restulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;

	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
