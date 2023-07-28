#include "main.h"
/**
 * rot13 -  function that encodes a string using rot13
 * @s: string
 *
 * Return: s
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
