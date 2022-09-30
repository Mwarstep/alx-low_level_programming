#include "main.h"

/**
 * _strcmp - Will compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared to s1
 *
 * Return: 0 if s1 and s2 are equal, less that 0 if s2 is greater
 * more thatn 0 if s1 is greater.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
