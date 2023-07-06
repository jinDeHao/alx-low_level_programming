#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key: the key
 * @value: the value
 * @ht: the hash table
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i = 0;

	if (!value || !key || *key == '\0')
		return (0);
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
		i++;
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (add_node_hash(&(ht->array[idx]), (char *)key, (char *)value))
		return (1);
	return (0);
}

/**
 * add_node_hash - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer
 * @key: the new key
 * @value: the new value
 * Return: newest node
 */
hash_node_t *add_node_hash(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_hash;

	new_hash = malloc(sizeof(hash_node_t));
	if (!new_hash)
		return (NULL);
	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = *head;
	*head = new_hash;
	return (*head);
}
