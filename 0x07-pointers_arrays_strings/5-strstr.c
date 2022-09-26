#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Will locate a substring
 * @haystack: The string to search in.
 * @needle: The substring to look for
 *
 * Return: Pointer to the beginning of the located substring
 * or NULL if substing not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
