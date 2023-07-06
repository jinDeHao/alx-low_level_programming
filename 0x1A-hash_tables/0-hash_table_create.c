#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_hash_table;
    
    new_hash_table = malloc(sizeof(hash_table_t));
    if (!new_hash_table)
        return (NULL);
    new_hash_table->array = malloc(size * sizeof(hash_node_t *));
    if (!new_hash_table->array)
        return (NULL);
    new_hash_table->size = size;
    return (new_hash_table);
}
