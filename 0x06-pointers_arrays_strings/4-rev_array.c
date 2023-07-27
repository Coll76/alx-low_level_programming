#include "main.h"
/**
 * reverse_array - reverse content of arrays
 * @a: an array og integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = j;
	}
}
