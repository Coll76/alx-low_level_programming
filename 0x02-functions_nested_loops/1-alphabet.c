#include "main.h"
/**
 * print_alphabet - 'print lowercase alphabets'
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
