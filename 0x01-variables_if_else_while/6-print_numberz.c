#include<stdio.h>
/**
 * main - Return point
 * description - 'Print all single numbers'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
	putchar((n % 10) + '0');
	n++;
	}
	putchar('\n');
	return (0);
}
