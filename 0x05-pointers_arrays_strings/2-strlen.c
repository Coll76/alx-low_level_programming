#include "main.h"
#include <string.h>
/**
 * _strlen - ' length of a string'
 * @s: String to be checked
 *Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
