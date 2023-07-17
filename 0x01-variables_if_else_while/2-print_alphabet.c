#include<stdio.h>
#include<ctype.h>
/**
 *main - Entry point
 *description - 'Print alphabets in lowercase
 *Return: always 0
 */
int main(void)
{
	int lowerCase = 'a';

	while (lowerCase<='z')
	{
	 putchar (lowerCase);
	 lowerCase++;
	}
	putchar ('\n');
	return (0);
}
