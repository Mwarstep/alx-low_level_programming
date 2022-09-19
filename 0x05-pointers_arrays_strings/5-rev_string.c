#include "main.h"

/**
 * rev_string - will reverse a string
 * @s: stirng that will be reversed.
 */

void rev_string(char *s)
{
	int x, len1, len2;
	char y;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}
	len2 = len1 - 1;

	for (x = 0; x < len1 / 2; x++)
	{
		y = s[x];
		s[x] = s[len2];
		s[len2--] = y;
	}
}
