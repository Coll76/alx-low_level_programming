#include "main.h"
/**
 * _isupper - 'print uppercase'
 * @c: letter to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{

	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
