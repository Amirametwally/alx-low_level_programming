#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer
 * @idx: is the index of the list where the new
 * node should be added
 * @n: data
 *
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *ptr;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	ptr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
		{
			free(newNode);
			return (NULL);
		}
		ptr = ptr->next;
	}
	newNode->next = ptr->next;
	ptr->next = newNode;

	return (newNode);
}
