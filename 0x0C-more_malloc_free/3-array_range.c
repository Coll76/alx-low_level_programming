#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *output;
	int i, j;

	if (min > max)
	return (NULL);
	j = max - min + 1;
	output = malloc(sizeof(int) * j);
	if (output == NULL)
	return (NULL);
	for (i = 0; i < j; i++)
	{
	output[i] = min;
	min++;
	}
	return (output);
}
