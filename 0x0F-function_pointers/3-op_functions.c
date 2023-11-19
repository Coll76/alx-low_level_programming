#include <stdio.h>
#include "calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first value
 * @b: second value
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns subtraction
 * @a: first value
 * @b: second value
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - returns division
 * @a: first value
 * @b: second value
 * Return: division
 */
int op_div(int a, int b)
{
	if ((a | b) == 0)
	{
	printf("Error\n");
	exit (100);
	}
	return (a / b);
}
/**
 * op_mul - returns product
 * @a: first value
 * @b: second value
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - returns modulus
 * @a: first value
 * @b: second value
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if ((a | b) == 0)
	{
	printf("Error\n");
	exit (100);
	}
	return (a % b);
}
