#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *str;

str = malloc(sizeof(dog_t));
if (!str)
return (NULL);
str->name = malloc(strlen(name) + 1);
if (!str->name)
{
free(str);
return (NULL);
}
strcpy(str->name, name);

str->age = age;

str->owner = malloc(strlen(owner) + 1);
if (!str->owner)
{
free(str->owner);
free(str);
return (NULL);
}

strcpy(str->owner, owner);
return (str);

}
