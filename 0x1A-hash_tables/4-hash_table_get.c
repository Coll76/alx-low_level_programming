#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	if (index >= ht->size)
	{
		return (NULL);
	}
	current = ht->array[index];

	while (current)
	{
	if (strcmp(current->key, key) == 0)
	{
		return (current->value);
	}
	current = current->next;
	}
	return (NULL);
}
