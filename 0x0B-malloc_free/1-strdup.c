#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer containing a copy of string
 * @str: string
 * Return: pointer of duplicated string
 */
char *_strdup(char *str)
{
	int strlen = 0;
	int i;
	char *duplicate;

	if (str == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	strlen++;
	duplicate = (char *)malloc(sizeof(char) * (strlen) + 1);

	if (duplicate == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	duplicate[i] = str[i];
	return (duplicate);
}
