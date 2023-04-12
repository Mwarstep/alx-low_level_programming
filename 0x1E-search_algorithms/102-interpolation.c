#include "search_algos.h"

/**
 * interpolation_search - Will search for a value in a sorted array of ints
 * using the Interpolation Search Algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Size of array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l_t, r_t;

	if (array == NULL)
		return (-1);

	for (l_t = 0, r_t = size - 1; r_t >= l_t;)
	{
		a = l_t + (((double)(r_t - l_t) / (array[r_t] - array[l_t])) *
				(value - array[l_t]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r_t = a - 1;
		else
			l_t = a + 1;
	}

	return (-1);
}
