#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the head of list
 * @index: the index of the node
 *
 * Return: the nth node of list or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;

	}
	return (head);
}
