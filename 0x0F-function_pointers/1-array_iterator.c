#include "function_pointers.h"

/**
 * array_iterator-function that executes a function given as a parameter
 * on each element of an array
 * @array:array
 * @size:size of array
 * @action:pointer to function
 *
 * Return:nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !action)
{
return;
}

while (size--)
(*action)(*array++);
}
