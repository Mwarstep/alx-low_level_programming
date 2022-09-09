#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0 for a succesfull prog run.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
