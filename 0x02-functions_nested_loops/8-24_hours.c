#include "main.h"
/**
 * jack_bauer - 'prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k;

	for (i = 0; j < 10; j++)
	{
	for (j = 0; j < 10; j++)
	{
	k = j * i;
	if (j == 10)
	{
	_putchar(k + '0');
	}
	if (k < 10 && j != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
	}
	else if (k >= 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((k / 100) + 10);
		_putchar((k % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
