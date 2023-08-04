#include <stdio.h>

/**
 * main - Entry point.
 * @argc: count
 * @argv: arguments string
 *
 * Return: INT.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
