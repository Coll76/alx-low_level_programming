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

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = hash_djb2((const unsigned char *)key);
	current = ht->array[index];

	if (current == NULL)
	{
		return (0);
	}
	if (strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}
	current = current->next;

	ne_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (ne_node == NULL)
	{
		return (0);
	}
	else
	{
	ne_node->key = strdup(key);
	ne_node->value = strdup(value);
	ne_node->next = ht->array[index];
	ht->array[index] = ne_node;
	}
	return (1);
}
