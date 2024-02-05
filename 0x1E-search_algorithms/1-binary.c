#include "search_algos.h"

/**
 * recursion_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: array input
 * @size: size of array
 * @value: value to search
 *
 * Return: The first index where value is located or -1
 */
int recursion_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursion_search(array, mid, value));

	mid++;

	return (recursion_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - function that return the index of the number
 *
 * @array: array input
 * @size: size of array
 * @value: value to search
 *
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursion_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
