#include "main.h"
/**
 * swap_int - 'Swap values between two integers'
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
