#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int srclength = 0;
	int destlength = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		srclength++;
	for (i = 0; dest[i] != '\0'; i++)
		destlength++;
for (i = 0; i <= srclength; i++)
dest[destlength + i] = src[i];
return (dest);
}
