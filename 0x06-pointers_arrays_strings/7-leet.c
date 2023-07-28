#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: sing
 * Return: ptr
*/

char *leet(char *s)
{
	char *str = s;
	char numbers[] = {4, 3, 0, 7, 1};
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int j = 0;

	while (*s)
	{
		for (j = 0; j < 5; j++)
		{
			if (*s == letter[j] || *s == letter[j] + 32)
			{
				*s = numbers[j] + '0';
			}
		}
		s++;
	}
	return (str);
}
