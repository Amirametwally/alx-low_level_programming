#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  function that adds a new node at the end
 * @head: pointer to head
 * @n: data
 *
 * Return: address o new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *ptr;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		end_node->prev = ptr;
		ptr->next = end_node;
	}

	return (end_node);
}
