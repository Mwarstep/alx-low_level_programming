#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - will print a name.
 * @name: The name to be printed
 * @f: The pointer to printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		return;
		f(name);
}
