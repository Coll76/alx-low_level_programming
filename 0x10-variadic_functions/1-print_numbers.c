#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(arg, int));
	if (separator != NULL && i != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
}
