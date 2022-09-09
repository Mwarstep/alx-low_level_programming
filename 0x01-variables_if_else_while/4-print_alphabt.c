#include <stdio.h>

/**
 * main - will print the alphabet in lowercase, except for q and e.
 *
 * Return: 0 for a successfull prog run.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
