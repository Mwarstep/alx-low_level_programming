#include "lists.h"

/**
 * free_listint_safe - will free a listint_t list
 * @h: The pointer to 1st node in linked list
 *
 * Return: The number of elements in free list
 */

size_t free_listint_safe(listint_t **h)
{
	int diff;
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
