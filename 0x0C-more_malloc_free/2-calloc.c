#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size of arrayi
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr = (char *)malloc(size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
		return (ptr);
		}
	}
}
