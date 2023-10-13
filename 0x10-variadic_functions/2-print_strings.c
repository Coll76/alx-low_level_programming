#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 *@separator: string to print between strings
 @n: number of strings passed to function
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(arg, char *);
	if (str  == NULL)
	{
	printf("nil");
	}
	printf("%s", str);

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
