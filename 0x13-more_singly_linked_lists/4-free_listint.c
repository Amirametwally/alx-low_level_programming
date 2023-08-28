#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}
}
