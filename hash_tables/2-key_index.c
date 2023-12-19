#include "hash_tables.h"
/**
 * key_index - Returns the index for storing a key/value pair in a hash table.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 * Return: The calculated index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;

return (index);

}
