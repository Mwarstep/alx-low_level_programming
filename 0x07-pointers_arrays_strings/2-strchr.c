#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Will locate a character in a string
 * @s: string to search
 * @c: The char to find
 *
 * Return: Pointer to the 1st occurence of char c in the
 * strings, or NULL if the char is not found.
 */

char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
