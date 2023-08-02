#include "main.h"

/**
 * _puts_recursion - prints a string follow by a new line.
 * @s: string in which to print.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	int i = 0;

	if (s[i] != '\0')
	{

		putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		putchar('\n');
	}
}
