#include "main.h"
/**
 * _isalpha - 'Check for alphabetic character'
 * @c: char to be checked
 * Return: 1 if char is a letter otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
