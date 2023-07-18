#include<stdio.h>
#include<ctype.h>
/**
 *main - Entry point
 *description - 'Print alphabets in lowercase'
 *Return: Always 0
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
