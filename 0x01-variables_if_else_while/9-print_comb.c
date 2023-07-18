#include <stdio.h>
/**
 * main - putchar numbers form 0 to 9
 * Description: using the main function
 * putchar numbers form 0 to 9 seprated by spaces and comma
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
