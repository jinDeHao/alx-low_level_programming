#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *letsfree;

	while (i < (int)ht->size)
	{
		while (ht->array[i])
		{
			letsfree = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(letsfree->key);
			free(letsfree->value);
			free(letsfree);
		}
		i++;
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
