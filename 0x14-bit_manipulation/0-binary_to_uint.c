#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int j;
	unsigned int len;

	len = strlen(b);

	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if (b[j] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
