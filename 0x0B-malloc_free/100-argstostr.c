#include "main.h"
/**
 * argstostr - concatenates all the arguments of program
 * @ac: count of args
 * @av: pointer to array of args
 * Return: pointer to new array of all args or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int length, i, j, d;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	length++;
	str = malloc(length * sizeof(char));
	if (str == 0)
		return (NULL);
	d = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[d++] = av[i][j];
		}
		str[d++] = '\n';
	}
	str[d] = '\0';
	return (str);
}
