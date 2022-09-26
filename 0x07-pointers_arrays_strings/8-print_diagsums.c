#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Will print the sum of two diagonals of a
 * square matrix of integers
 * @a: The square matrix of integers
 * @size: The size of the matrix
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int x;

	unsigned int tot1, tot2;

	tot1 = 0;
	tot2 = 0;

	for (x = 0; x < size; x++)
	{
		tot1 += a[(size * x) + x];
		tot2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", tot1, tot2);
}
