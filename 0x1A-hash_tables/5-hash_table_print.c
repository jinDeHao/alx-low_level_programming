#include "hash_tables.h"
#include "stdio.h"

int check_hash_table(hash_node_t **hash, unsigned long int size);

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, check, prchick = 0;
	hash_node_t *set;

	if (!ht)
		return;
	check = check_hash_table(ht->array, ht->size);
	fprintf(stdout, "{");
	while (i < (int)ht->size)
	{
		set = ht->array[i];
		while (set)
		{
			fprintf(stdout, "'%s': '%s'", set->key, set->value);
			prchick++;
			if (prchick != check)
				fprintf(stdout, ", ");
			set = set->next;
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
