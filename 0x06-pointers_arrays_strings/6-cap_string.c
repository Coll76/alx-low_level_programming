#include "main.h"
/**
 * cap_string - 'capitalize all words'
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
char p[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
	if (i == 0 && i >= 'a' && i <= 'z')
		s[i] = s[i] - 32;
	for (j = 0; j < 13; j++)
	{
	if (s[i] == p[j])
	{
	if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
	s[i + 1] = s[i + 1] - 32;
	}
	}
	}
	return (s);
}
