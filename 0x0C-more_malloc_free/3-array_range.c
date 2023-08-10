#include "main.h"

/**
 * array_range - Function create and array of integers.
 * @min: start
 * @max: end
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	i = max - min;

	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[i] = max;
		i--;
		max--;
	}
	arr[i] = min;
	return (arr);
}
