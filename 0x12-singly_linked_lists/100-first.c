#include <stdio.h>

void printStr(void) __attribute__((constructor));
/**
 * printStr - function that prints string
 * before the main function is executed.
 *
 * Return: nothing
 */
void printStr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
