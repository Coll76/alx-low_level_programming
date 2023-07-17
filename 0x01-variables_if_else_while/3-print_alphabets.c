#include<stdio.h>
#include<ctype.h>
/**
 * main - Return point
 * description - 'Print aphabrt in lowercase then in uppercase'
 * Return: Always 0
 */
int main(void)

{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase++;
	}
	while (upperCase <= 'Z')
	{
	putchar(upperCase);
	upperCase++;
	}
	putchar('\n');
	return (0);
}
