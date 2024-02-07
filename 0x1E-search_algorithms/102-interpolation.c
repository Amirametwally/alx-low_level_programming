#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, start, end;
	double i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (size)
	{
		i = (double)(end - start) / (array[end] - array[start]) *
										 (value - array[start]);
		mid = (size_t)(start + i);
		printf("Value checked array[%d]", (int)mid);

		if (mid >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[mid]);
		}

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;

		if (start == end)
			break;
	}

	return (-1);
}
