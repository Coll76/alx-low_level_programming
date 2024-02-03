#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value1
 *Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str);
/**
 *key_index - function that gives you the index of a key.
 *@key: is the key
 *@size: size of the array of the hash table
 *Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
