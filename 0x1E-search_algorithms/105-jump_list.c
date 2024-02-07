#include "search_algos.h"
#include <math.h>
/**
 * jump_list - function that searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: list to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: node, NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = (int) sqrt(size);
	size_t i = 0;
	listint_t *left = list, *right = list;

	if (!list)
		return (NULL);
	while (list)
	{
		if (right->index == size - 1 || right->n >= value)
		{
			printf(
				"Value found between indexes [%lu] and [%lu]\n",
				left->index, right->index
			);
			break;
		}
		left = right;
		for (i = right->index + jump; right->index < i &&
				right->next; right = right->next)
			;
		printf("Value checked at index [%lu] = [%d]\n",
			right->index, right->n
		);
	}
	for (; left != right->next; left = left->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
	}
	return (NULL);
}
