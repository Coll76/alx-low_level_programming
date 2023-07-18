#include "main.h"
/**
 * print_alphabet_x10 - 'print alphabets 10 times'
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int j = 0;

	while (j <= 10)
	{
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	j++;
	}
}
