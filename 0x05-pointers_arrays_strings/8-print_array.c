#include <stdio.h>
#include "main.h"

/**
 * print_array - will print elements of an array of integers.
 * @n: the number of  elements of the array to be printed
 * @a: the array to be printed.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
