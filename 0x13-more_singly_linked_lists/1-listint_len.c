#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
