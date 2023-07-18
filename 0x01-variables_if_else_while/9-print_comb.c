#include<stdio.h>
#include<ctype.h>
/**
 * main - Return point
 * description - 'Print aphabrt in lowercase then in uppercase'
 * Return: Always 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
	putchar(i);
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	++i;
	}
	putchar('\n');
	return (0);
}

