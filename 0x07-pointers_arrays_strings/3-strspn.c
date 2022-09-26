#include "main.h"

/**
 * _strspn - will get the length of a prefix substring
 * @s: sting to be evaluated
 * @accept: contains the list of chars to match in s
 *
 * Return: The number of bytes in the initial segment
 * of consisting of bytes fron accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, flag;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		flag = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (z);
		}
	}
	return (0);
}
