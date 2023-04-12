#include "search_algos.h"

/**
 * binary_search - Will search for a value in a sorted array on integers
 * using the Binary Search Algorithm
 * @array: Pointer to the first element of array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: First index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a, lt_a, rt_a;

	if (array == NULL)
		return (-1);

	for (lt_a = 0, rt_a = size - 1; rt_a >= lt_a;)
	{
		printf("Searching in array: ");
		for (a = lt_a; a <= rt_a; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = lt_a + (rt_a - lt_a) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			rt_a = a - 1;
		else
			lt_a = a + 1;
	}
	return (-1);
}
