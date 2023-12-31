#include "main.h"

/**
 * clear_bit - function that clears the value of a bit to 0 at a given index.
 * @n: number
 * @index: the index
 *
 * Return: (1) or (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	(*n) = (*n) & ~(1 << index);
	return (1);
}
