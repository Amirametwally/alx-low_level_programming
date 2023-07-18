#include <stdio.h>
/**
 * main - print alpa lowercase
 * Description: using the main function
 * putchar to lowercase
 *Return: 0
*/
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
