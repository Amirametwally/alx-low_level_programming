#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, for ptr
 * @new_size: new size, of the new memory block
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == (NULL))
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}

memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
free(ptr);
return (new_ptr);
}
