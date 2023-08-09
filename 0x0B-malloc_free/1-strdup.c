#include "main.h"

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == 0)
		return (0);



	while (str[i] != 0)
		i++;

	i++;

	ptr = malloc(sizeof(char) * i);
	  if (ptr == NULL)
		  return (NULL);

	for (i = 0; str[i] != 0; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}
