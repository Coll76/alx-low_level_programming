#include "main.h"
/**
 * print_last_digit - 'Function that prints the last digit'
 * @c: int to be checked
 * Return: Value of last digit
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
	{
	ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
