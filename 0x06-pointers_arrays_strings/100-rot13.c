#include "main.h"

/**
 * rot13 - Will encode a string in rot13
 * @s: The string to be encoded
 *
 * Return: Encoded string.
 */

char *rot13(char *s)
{
	int x, y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJLKMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}
	return (s);
}
