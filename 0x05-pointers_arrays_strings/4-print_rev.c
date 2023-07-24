#include "main.h"
/**
 * print_rev - 'print string on reverse'
 * @s: string
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	for (i = j; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
