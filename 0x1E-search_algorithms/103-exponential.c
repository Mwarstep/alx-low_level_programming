#include "search_algos.h"

/**
 * _binary_search - Will search for a value in a sorted array of ints using
 * The binary search
 * @array: Pointer to the first element of the array to search
 * @left: The starting index of the sub-array to search
 * @right: The ending index of the sub-array to search
 * @value: The value to search for
 *
 * Return: The index where the value is located, otherwise -1
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (a = left; a < right; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = left + (right - left) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			right = a - 1;
		else
			left = a + 1;
	}
	return (-1);
}

/**
 * exponential_search - Will search for a value in  a sorted array of ints
 * using Exponential Search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where the value is located, otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, r_t;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			print("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	right = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, right);
	return (_binary_search(array, a / 2, right, value));
}
