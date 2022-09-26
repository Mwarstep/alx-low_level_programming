#include "main.h"

/**
 * *_memcpy - will copy memory area
 * @dest: destination memory area
 * @src: the memory area to copy from
 * @n: The number of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
