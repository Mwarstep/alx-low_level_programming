#include <stdio.h>

/**
 * main - will print the alphabet in lowercase then in upprecase.
 *
 * Return: 0 for a succesful prog run.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
