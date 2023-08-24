#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: pointer of head
 * @str: string
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *lastNode;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	  return (NULL);
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head)
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
