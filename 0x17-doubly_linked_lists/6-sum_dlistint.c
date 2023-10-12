#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint -  function that returns the sum of all the data
 * @head: pointer of the head
 *
 * Return:  the sum of all the data or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
