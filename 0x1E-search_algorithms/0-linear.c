#include "search_algos.h"

/**
 * linear_search - will search for a value in array of integers using
 * the Linear Search Algorithm
 * @array: Pointer to the first element of array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value cheked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
