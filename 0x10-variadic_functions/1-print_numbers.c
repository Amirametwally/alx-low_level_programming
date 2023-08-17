#include "variadic_functions.h"

/**
 * print_numbers -function that prints numbers, followed by a new line.
 * @separator:  the separator.
 * @n: number of elements to print.
 * @...: arguments to print.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 0;

va_start(ptr, n);

while (i < n)
{
printf("%d", va_arg(ptr, int));
i++;
if (i < n && (separator))
{
printf("%s", separator);
}
}
va_end(ptr);
printf("\n");
}
