#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		Sum += va_arg(ptr, int);

	va_end(ptr);

	return Sum;
}
