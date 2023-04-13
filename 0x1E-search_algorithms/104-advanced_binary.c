#include "search_algos.h"

/**
 * advanced_binary_recursive - will search recursively for a value in a sorted
 * array of ints using Binary Search
 * @array: Pointer to the first element of the sud-array to search
 * @left: Starting index of the sub-array to search
 * @right: Ending index of sub-array to search
 * @value: The value to search
 *
 * Return: Index where value is located, otherwise -1
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (a = left; a < right; a++)
		printf("%d, ", array[a]);
	printf("%d\n", array[a]);

	a = left + (right - left) / 2;
	if (array[a] == value && (a == left || array[a - 1] != value))
		return (a);
	if (array[a] >= value)
		return (advanced_binary_recursive(array, left, a, value));
	return (advanced_binary_recursive(array, a + 1, right, value));
}

/**
 * advanced_binary - Will search for a value in a sorted array of ints using
 * Advanced Binary Search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: First index where the value is located, otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
