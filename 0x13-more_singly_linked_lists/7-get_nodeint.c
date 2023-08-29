#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
	}

	return (head);
}
