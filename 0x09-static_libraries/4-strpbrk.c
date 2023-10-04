#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to search
 *Return: pointer to s or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	const char *a = accept;

	while (*a != '\0')
	{
	if (*s == *a)
	return (s);
	a++;
	}
	s++;
	}
	return (NULL);
}
