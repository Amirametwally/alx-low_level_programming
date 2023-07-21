#include "main.h"

/**
 * print_number -  function that prints an integer
 * @i: integr that printed
 *
 * Return: nothing
 */
void print_number(int i)
{
	if (i / 10 != 0)
	{
		print_number(i / 10);
		if (i > 0)
		{
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(-i % 10 + '0');
		}
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i > 0))
	{
		_putchar(i % 10 + '0');
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
	{
		_putchar('-');
		_putchar(-i % 10 + '0');
	}
}
