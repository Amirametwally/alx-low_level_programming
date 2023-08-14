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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
printf("Age: %f\n", d->age);
}
}
