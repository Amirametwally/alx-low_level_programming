#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 * character, followed by a new line
 * @str:  string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len ; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
