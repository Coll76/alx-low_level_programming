#include "main.h"
/**
 * print_rev - 'print string on reverse'
 * @s: string
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (s[1] != '\0')
	{
	j++;
	}
	for (i = j; i > 0; i--)
	{
	_putchar(s[1]);
	}
	_putchar('\n');
}
