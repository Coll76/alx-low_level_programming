#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: number of char
 * @c: character
 * Return: c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
	{
	printf("NULL");
	}
	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}
	return (ptr);
}
}
