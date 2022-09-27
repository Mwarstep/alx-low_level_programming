#include "main.h"

/**
 * set_string - will set the value of a pointer to a char.
 * @s: pointer to pointer that neets to be set to
 * @to: The string to set
 *
 * Return: None
 */

void set_string(char **s, char *to)
{
	*s = to;
}
