#include "main.h"
/**
 * _strncat - cocatenate two strings
 * @dest: destination
 * @src: source
 * @n: bytes to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
	src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
