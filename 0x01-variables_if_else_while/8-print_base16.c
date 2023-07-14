#include <stdio.h>
/**
 * main - putchar numbers form 0 to 9
 * Description: using the main function
 * putchar numbers form 0 to 9
 *Return: 0
 */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
