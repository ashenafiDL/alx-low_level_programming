#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);

				if (temp->next != NULL)
					printf(", ");

				temp = temp->next;
			}
			flag = 1;
		}
	}
	printf("}\n");
}
