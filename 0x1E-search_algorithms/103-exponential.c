#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index, -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	int left = 0, right = 1;

	if (!array)
		return (-1);
	while (right < (int) size - 1)
	{
		if (array[right] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right = right * 2 <= (int) size - 1 ? right * 2 : (int) size - 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	return (binarySearch(array, left, right, value));
}
/**
 * binarySearch - binary search
 * @array: array to search
 * @left: left bound
 * @right: right bound
 * @value: value to search for
 *
 * Return: index, -1 if not found
 */

int binarySearch(int *array, int left, int right, int value)
{
	int mid;

	while (array && left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
/**
 * print_array - print array for binary search
 * @array: array to print
 * @left: left bound
 * @right: right bound
 */

void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left < right)
		printf("%d, ", *(array + left++));
	printf("%d\n", *(array + right));
}
