#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String
 */
char *cap_string(char *s)
{
	int j;
	char a[] = " \t\n,.!?\"(){}";

	int capital = 1;
	char *str = s;

	while (*s)
	{
		if (capital && *s >= 'a' && *s <= 'z')
			*s -= 32;
		capital = 0;
		for (j = 0; j < 12; j++)
		{
			if (*s == a[j])
				capital = 1;
		}
		s++;
	}
	return (str);
}
