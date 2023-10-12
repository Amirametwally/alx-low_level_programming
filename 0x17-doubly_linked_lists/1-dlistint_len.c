#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h:pointer to the head
 *
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t count;

while (ptr)
{
ptr = ptr->next;
count++;

}

return (count);
}
