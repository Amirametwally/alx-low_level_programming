#include <stdio.h>
/**
 * main - print alpa lowercase expect 'e' and 'q'
 * Description: using the main function
 * putchar to lowercase expect 'e' and 'q'
 *Return: 0
 */
int main(void)
{
	char alp = 'a';

	for (; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
		{
			continue;
		}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
