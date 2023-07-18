#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - print if the number positive or negative
	* Description: using the main function
	* this function prints "Number is positive or negative or zero"
	* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
