#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 * Return: the created shash table, or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *ptr;

	ptr = *h;

	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (ptr);
		}
		ptr = ptr->next;
	}

	ptr = malloc(sizeof(shash_node_t));

	if (ptr == NULL)
		return (NULL);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = *h;

	*h = ptr;

	return (ptr);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table
 * @new: new node to add
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *ptr1, *ptr2;
	int ret;

	ptr1 = ptr2 = ht->shead;

	while (ptr1 != NULL)
	{
		ret = strcmp(new->key, ptr1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = ptr1->sprev;

			if (ptr1->sprev)
				ptr1->sprev->snext = new;
			else
				ht->shead = new;

			ptr1->sprev = new;
			new->snext = ptr1;

			return;
		}
		ptr2 = ptr1;
		ptr1 = ptr1->snext;
	}

	new->sprev = ptr2;
	new->snext = NULL;

	if (ht->shead)
		ptr2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_of_index;
	shash_node_t *new;

	if (ht == NULL)

		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_of_index = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[k_of_index]), key, value);

	if (new == NULL)
		return (0);


	add_i_shash(ht, new);


	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_of_index;
	shash_node_t *ptr;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_of_index = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[k_of_index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	ptr = ht->shead;

	while (ptr != NULL)
	{
		printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
		sep = ", ";
		ptr = ptr->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	ptr = ht->stail;

	while (ptr != NULL)
	{
		printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
		sep = ", ";
		ptr = ptr->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *ptr1;
	shash_node_t *ptr2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr1 = ht->array[i];
		while ((ptr2 = ptr1) != NULL)
		{
			ptr1 = ptr1->next;
			free(ptr2->key);
			free(ptr2->value);
			free(ptr2);
		}
	}
	free(ht->array);
	free(ht);
}
