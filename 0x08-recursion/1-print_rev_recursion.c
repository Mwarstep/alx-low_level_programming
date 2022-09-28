#include "main.h"

/**
 * _print_rev_recursion - Will print a string in reverse
 * @s: The string to be printed
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s)
	}
}
