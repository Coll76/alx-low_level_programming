#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of parameters
 *@n: number of arguments
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
	return (0);
	}
	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(arg, int);
	}
	return (sum);
}
