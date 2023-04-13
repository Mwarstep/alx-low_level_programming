#include "search_algos.h"

/**
 * jump_list - Will search for an algorithm in a sorted list using the Jump
 * Search Algorithm
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is, otherwise NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, stp_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (stp += stp_size; jump->index < stp; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
			jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
