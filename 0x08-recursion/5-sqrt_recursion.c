#include "main.h"
/**
 * _sqrt_recursion - retirns natural square root
 * @n: number
 * @i: iterate number
 * Return: natural square root
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 *@n: number to calculate square root
 * @i: itinerate number
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);
	else if (sqrt == n)
	return (i);
	else
	return (_sqrt(n, i + 1));
	return (0);
}
