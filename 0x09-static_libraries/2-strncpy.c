#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 * @n: number of byte
 *
 * Return:  0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
