#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
	}
}
