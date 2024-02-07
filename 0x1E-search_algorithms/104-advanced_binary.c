#include "search_algos.h"
/**
 * advanced_binary - function that searches for a value in
 * a sorted array of integers.
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index, -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (advanced_helper(array, 0, (int) size - 1, value));
	return (-1);
}
/**
 * advanced_helper - helper
 * @array: array to search
 * @left: left bound
 * @right: right bound
 * @value: value to search
 *
 * Return: index, -1 if not found
 */
int advanced_helper(int *array, int left, int right, int value)
{
	int mid;

	print_array_adv(array, left, right);
	if (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (advanced_helper(array, left, mid, value));
			return (mid);
		}
		else if (array[mid] < value)
			return (advanced_helper(array, mid + 1, right, value));
		else
			return (advanced_helper(array, left, mid, value));
	}
	return (array[left] == value ? left : -1);
}
/**
 * print_array_adv - print array for binary search
 * @array: array to print
 * @left: left bound
 * @right: right bound
 */
void print_array_adv(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left < right)
		printf("%d, ", *(array + left++));
	printf("%d\n", *(array + right));
}
