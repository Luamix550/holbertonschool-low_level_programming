#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *h_t = NULL;

if (size == 0)
return NULL;

h_t = malloc(sizeof(hash_table_t));
if (h_t == NULL)
return NULL;

h_t->array = malloc(size * sizeof(hash_node_t *));
if (h_t->array == NULL)
{
free(h_t);
return NULL;
}

h_t->size = size;
return h_t;
}
