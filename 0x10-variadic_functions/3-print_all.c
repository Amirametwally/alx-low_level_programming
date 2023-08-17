#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char*);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	print_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != print[j].param[0])
			++j;
		if (j < 4)
		{
			printf("%s", sep);
			print[j].f(args);
			sep = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(args);
}
