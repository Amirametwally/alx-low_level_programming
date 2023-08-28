#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer
 * @n: data of new node
 *
 * Return: the address of the new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
