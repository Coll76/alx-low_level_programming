#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	(void)key;
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (i);
}
