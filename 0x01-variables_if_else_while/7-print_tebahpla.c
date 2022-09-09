#include <stdio.h>

/**
 * main - will print the aphabet in reverse and lowercase.
 *
 * Return: 0 for a successful prog run.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
