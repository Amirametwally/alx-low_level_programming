#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	char *str;

	if (ht == NULL)
		return;

	printf("{");
	str = "";

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", str, ptr->key, ptr->value);
			str = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
