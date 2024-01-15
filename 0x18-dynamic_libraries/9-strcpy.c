#include "main.h"
/**
 * _strcpy - 'function to copy string'
 * @src: string
 * @dest: string to check
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
	*(dest + len) = *(src + len);
	len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
