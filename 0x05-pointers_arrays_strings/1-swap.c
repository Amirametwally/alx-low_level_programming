#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
