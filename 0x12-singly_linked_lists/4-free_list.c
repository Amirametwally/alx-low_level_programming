#include "lists.h"
#include <string.h>
/**
 * free_list - free a list_t
 * @head: pointer to the head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
