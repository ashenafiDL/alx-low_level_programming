#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value asscociated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new;

	if (strcmp(key, "") == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	index = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
