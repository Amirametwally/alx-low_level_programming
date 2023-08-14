#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
printf("nothing\n");

if (d != NULL)
{
d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");

}
}

