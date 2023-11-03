#include "hash_tables.h"

/**
 * add_node - function that add node at the beginning
 * @head: the head
 * @key: the key
 * @value: the value to store
 *
 * Return: head of the hash table
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *ptr;

	ptr = *head;

	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (*head);
		}
		ptr = ptr->next;
	}

	ptr = malloc(sizeof(hash_node_t));

	if (ptr == NULL)
		return (NULL);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

/**
 * hash_table_set - function that gives you the index of a key.
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the size of the array of the hash table
 *
 * Return: the index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_of_key;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index_of_key = key_index((unsigned char *)key, ht->size);
	if (add_node(&(ht->array[index_of_key]), key, value) == NULL)
		return (0);

	return (1);
}
