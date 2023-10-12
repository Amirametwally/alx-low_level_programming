#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head
 * @index: index of the node to delete
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
		dlistint_t *new;
		unsigned int i;

		if (head == NULL || *head == NULL)
			return (-1);

		new = *head;

		if (index == 0)
		{
			*head = new->next;
			if (new->next != NULL)
				new->next->prev = NULL;
			free(new);
			return (1);
		}

		for (i = 0; i < index; i++)
		{
			if (new == NULL)
				return (-1);
			new = new->next;
		}

		new->prev->next = new->next;
		if (new->next != NULL)
			new->next->prev = new->prev;
		free(new);

		return (1);
}
