#include "hash_tables.h"
#include "stdio.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	char *sp = "";

	if (!ht)
		return;
	fprintf(stdout, "{");
	while (i < (int)ht->size)
	{
		while (ht->array[i])
		{
			fprintf(stdout, "%s'%s': '%s'", sp, ht->array[i]->key, ht->array[i]->value);
			sp = ", ";
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	fprintf(stdout, "}\n");
}
