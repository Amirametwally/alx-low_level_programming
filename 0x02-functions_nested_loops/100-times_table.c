#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, value;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				value = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (value < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((value % 10) + '0');
				}
				else if (value >= 10 && value < 100)
				{
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
				else if (value >= 100 && j != 0)
				{
					_putchar((value / 100) + '0');
					_putchar((value / 10) % 10 + '0');
					_putchar((value % 10) + '0');
				}
				else
					_putchar((value % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
