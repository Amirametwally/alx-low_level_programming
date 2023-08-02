#include "main.h"

/**
 * factorial - desciption
 * @n: number
 *
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
