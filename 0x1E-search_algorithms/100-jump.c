#include "search_algos.h"

/**
 * jump_search - Will search for a value in a sorted array of integers using
 * the Jump Search Algorithm
 * @array: Pointer to the first element of the array to search
 * @size: The size of array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a, jump, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		a = jump;
		jump += stp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	if (jump >= size)
		jump = size - 1;

	for (; a < jump && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
