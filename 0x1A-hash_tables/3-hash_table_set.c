#include "hash_tables.h"
/**
 * hash_djb2 - gives the hashcode/index for the key
 * @str: key
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str);
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ne_node;
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
		free(current->value);
		current->value = strdup(value);
		if (current->value == NULL)
		{
			return (0);
		}
		return (1);
		}
	current = current->next;
	}

	ne_node = malloc(sizeof(hash_node_t));

	if (ne_node == NULL)
	{
		return (0);
	}
	ne_node->key = strdup(key);
	if (ne_node->key == NULL)
	{
		free(ne_node->key);
		return (0);
	}
	ne_node->value = strdup(value);
	if (ne_node->value == NULL)
	{
		free(ne_node->key);
		free(ne_node->value);
		return (0);
	}
	ne_node->next = ht->array[index];
	ht->array[index] = ne_node;
	return (1);
}
