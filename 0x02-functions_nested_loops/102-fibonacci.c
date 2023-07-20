#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
long count, i, j, key;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		key = i + j;
		i = j;
		j = key;
		printf("%lu", key);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
