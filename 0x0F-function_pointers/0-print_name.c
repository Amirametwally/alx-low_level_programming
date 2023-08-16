#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: string
 * @f: fuction
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
{
return;
}
else
{
(*f)(name);
}
}
