#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Will search for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the bytes t look for
 *
 * Return: Pointer to the byte in s that matches on e of the bytes
 * in accepr or NULL if no byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
