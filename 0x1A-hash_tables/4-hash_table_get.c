#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_list;

	if (!ht || !key || *key == '\0')
		return (NULL);

	hash_list = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (hash_list)
	{
		if (!strcmp(hash_list->key, key))
			return (hash_list->value);
		hash_list = hash_list->next;
	}
	return (NULL);
}
