#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees list
 * @head: pointer to the head of list
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

}
