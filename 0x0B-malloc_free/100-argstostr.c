#include "main.h"
/**
 * argstostr - concatenates all the arguments of program
 * @ac: count of args
 * @av: pointer to array of args
 * Return: pointer to new array of all args or NULL if failure
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
	return (NULL);

int total_length = 0;
int i, j;
char *str;

for (i = 0; i < ac; i++)
	{
	total_length += strlen(av[i]) + 1;
}

str = malloc(sizeof(char) * total_length + 1);

if (str == NULL)
	return (NULL);

int position = 0;
for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		str[position] = av[i][j];
			position++;
		}
		str[position] = '\n';
		position++;
}

str[position] = '\0';

return (str);
}
