#include "hash_tables.h"
#include "stdio.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	char *separator = "{";

	while (ht && i < (int)ht->size)
	{
		while (ht->array[i])
		{
			fprintf(stdout, "%s'%s': '%s'", separator, ht->array[i]->key, ht->array[i]->value);
			separator = ", ";
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	fprintf(stdout ,"}\n");
}
