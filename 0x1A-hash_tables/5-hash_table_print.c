#include "hash_tables.h"
#include "stdio.h"

int check_hash_table(hash_node_t **hash, unsigned long int size);

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, check = check_hash_table(ht->array, ht->size), prchick = 0;

	if (!ht && 1)
		return;
	fprintf(stdout, "{");
	while (ht && i < (int)ht->size)
	{
		while (ht->array[i])
		{
			fprintf(stdout, "'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			prchick++;
			if (prchick != check)
				fprintf(stdout, ", ");
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	fprintf(stdout, "}\n");
}

/**
 * check_hash_table - check the dictionary of hash table
 * @hash: the array
 * @size: size of array
 * Return: the number of elements
*/
int check_hash_table(hash_node_t **hash, unsigned long int size)
{
	int check = 0, i = 0;
	hash_node_t *set;

	while (i < (int)size)
	{
		set = hash[i];
		while (set)
		{
			check++;
			set = set->next;
		}
		i++;
	}
	return (check);
}
