#include "main.h"

/**
 * *_memset - Will fill memory with a constant byte
 * @s: The memory to be filled
 * @b: The char to copy
 * @n: The number of times to copy b
 *
 * Return: The pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
