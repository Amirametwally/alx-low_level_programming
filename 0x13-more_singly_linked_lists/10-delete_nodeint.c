#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer
 * @index: the index of node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *current, *previous;
	unsigned int i;

	if (!(*head))
		return (-1);
	i = 0;
	previous = NULL;
	current = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}

	return (-1);
}
