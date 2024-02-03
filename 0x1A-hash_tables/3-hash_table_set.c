#include "hash_tables.h"
/**
 * create_item - function that creates item
 * @key: key for the item
 * @value: value assigned to key
 * Return: item created
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));

	item->key = (char *)malloc(strlen(key) + 1);
	item->value = (char *)malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
/**
 * hash_djb2 - used to create a hash code/index for the key
 * @str: key
 * Return: index
 */
unsigned long int hash_djb2(const unsigned char *str);
/**
 * hash_table_set - adds an element to the hash table.
 *@ht: hash table you want to add or update the key/value to
 *@key: the key
 *@value: value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*creates the item*/
	hash_node_t *item = create_item(key, value);
	/*assigns an index to the key*/
	unsigned long int index = hash_djb2((const unsigned char *)key);
	/*check if key is empty*/
	hash_node_t *current = ht->array[index];

	if (current == NULL)
	{
		return (0);
	}
	ht->array[index] = item;
	return (1);
}
