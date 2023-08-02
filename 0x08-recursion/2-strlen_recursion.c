#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		return (1 + _strlen_recursion(s + i));
	}
	return (0);
}
