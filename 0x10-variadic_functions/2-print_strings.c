#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list arr;

va_start(arr, n);
for (i = 0; i < n; i++)
{
str = va_arg(arr, char*);

printf("%s%s", str == NULL ? "(nil)" : str,
(i < n - 1 && separator != NULL) ? separator : "");
}
va_end(arr);
printf("\n");
}
