#include "main.h"
/**
 * print_numbers - 'print numbers from 0 to 9'
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
	_putchar((a % 10) + '0');
	a++;
	}
	_putchar('\n');
}
