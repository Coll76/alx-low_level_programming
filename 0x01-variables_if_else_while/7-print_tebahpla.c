#include<stdio.h>
#include<ctype.h>
/**
 * main - Return point
 * description - 'Print lowercase reverse'
 * Return: Always 0
 */
int main(void)
{
	int lowerCase;

for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
{
	putchar(lowerCase);
}
putchar('\n');
return (0);
}
