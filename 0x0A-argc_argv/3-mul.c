#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply numbers
 * @argc:argument count
 * @argv:argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	multiply = multiply * atoi(argv[i]);
	printf("%d\n", multiply);
	}
	return (0);
}
