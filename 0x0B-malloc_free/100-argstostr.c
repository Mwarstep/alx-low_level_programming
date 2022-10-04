#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - will concantenate all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: The pointer to the new string, otherwise NULL.
 */

char *argstostr(int ac, char **av)
{
	char *strng;
	int x, y, z, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}
	strng = malloc(sizeof(char) * (len + 1));

	if (strng == NULL)
		return (NULL);

	z = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			strng[z] = av[x][y];
			z++;
		}
		strng[z] = '\n';
		z++;
	}
	return (strng);
}
