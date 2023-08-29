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
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;
	while (i < index)
	{
		if (current != NULL)
		{
			prev = current;
			current = current->next;
			i++;
		}
	}
	prev->next = current->next;

	return (0);
}
