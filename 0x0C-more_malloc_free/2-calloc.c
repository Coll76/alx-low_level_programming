#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size of arrayi
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
	return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
	return (NULL);
	else
	return (output);
}
