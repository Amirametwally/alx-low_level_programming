#include <stdio.h>
/**
 * main - print alpa lowercase
 * Description: using the main function
 * putchar to lowercase
 *Return: 0
*/
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
