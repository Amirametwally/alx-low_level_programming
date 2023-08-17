#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int Sum = 0;
unsigned int i;

va_list count;

va_start(count, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
Sum += va_arg(count, int);
}

va_end(count);

return (Sum);
}
