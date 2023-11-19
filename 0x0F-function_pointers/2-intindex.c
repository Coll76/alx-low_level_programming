#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *@array: array
 *@size: size of array
 @cmp: function pointer
 *@int: parameter of function pointer of type int
 *Return: index of first element which satisfies conition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp  == NULL)
		return 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0 )
		return (i);
	}
		return (-1);
}
