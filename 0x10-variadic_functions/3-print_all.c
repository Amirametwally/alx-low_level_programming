#include "variadic_functions.h"


/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list argu;
int i = 0;
char *str;

va_start(argu, format);

while (format && format[i])
{
if (i > 0 && (format[i - 1] == 'c' || format[i - 1] == 'i' ||
format[i - 1] == 'f' || format[i - 1] == 's'))
{
printf(", ");
}

switch (format[i])
{
case 'c':
printf("%c", va_arg(argu, int));
break;
case 'i':
printf("%d", va_arg(argu, int));
break;
case 'f':
printf("%f", va_arg(argu, double));
break;
case 's':
str = va_arg(argu, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
break;
}

i++;
}

va_end(argu);

printf("\n");
}
