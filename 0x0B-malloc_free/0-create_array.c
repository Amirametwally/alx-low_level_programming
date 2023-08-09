#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	str[i] = 0;
	return (size < 1 ? 0 : str);
}
