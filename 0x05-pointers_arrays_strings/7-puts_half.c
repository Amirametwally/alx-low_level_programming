#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		n = (len - 1) / 2;
		n += 1;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
