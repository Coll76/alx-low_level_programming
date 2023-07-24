#include "main.h"
/**
 * print_array - 'function to print n elements'
 * @a: first value
 * @n: second value
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
	printf("%d", a[t]);
	if (t != n - 1)
	printf(", ");
	}
	printf("\n");
}
