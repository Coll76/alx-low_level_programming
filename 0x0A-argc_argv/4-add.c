#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - programm that adds positive nummbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
	int main(int argc, char *argv[])
	{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
				printf("Error\n");
				return (1);
				}
			}
			sum = sum + atoi(argv[i]);
	}
		printf("%d\n", sum);
	}
	return (0);
	}
