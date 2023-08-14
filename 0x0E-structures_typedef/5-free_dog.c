#include "dog.h"

/**
 * free_dog - free(memory)
 * @d: pointer to dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
