#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
long count, i, j, key, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		key = i + j;
		i = j;
		j = key;
		if (key % 2 == 0 && key < 4000000)
		{
			sums += key;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
