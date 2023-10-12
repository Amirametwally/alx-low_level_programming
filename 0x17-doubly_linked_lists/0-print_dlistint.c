#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t count = 0;

ptr = h;
while (ptr)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;

}

return (count);
}
