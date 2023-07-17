#include <stdio.h>
#include<ctype.h>
/**
 * main - Return point
 * description-' Print lowercase apart q and e'
 * Return: Always 0
 */
int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
	if (lowerCase	== 'q' || lowerCase == 'e')
	{
	lowerCase++;
	continue;
	}
	putchar(lowerCase);
	lowerCase++;
	}
	putchar('\n');
	return (0);
}
