#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion(s + i);
		putchar(s[i]);
	}
}
