#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: String to count
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
