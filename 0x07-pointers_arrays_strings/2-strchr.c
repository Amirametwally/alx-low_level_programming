#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
