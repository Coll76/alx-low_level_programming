#include "main.h"
/**
 * print_square - 'function that prints a square'
 *@size: number to be checked
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	_putchar('\n');
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
