#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: pointer to the head
 * @idx: the index of list
 * @n: data
 *
 * Return: the address of the new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	ptr = *h;
	for (i = 0; i < idx; i++)
	{
		if (ptr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		ptr->next = new_node;
		new_node->prev = ptr;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ptr;
		new_node->prev = ptr->prev;
		if (ptr->prev != NULL)
			ptr->prev->next = new_node;
		ptr->prev = new_node;
	}
	return (new_node);
}
