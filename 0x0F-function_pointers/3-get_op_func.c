#include "calc.h"
#include <stdio.h>
/**
 * get_op_func - returns function pointer of type int
 * @s: string containing operators
 * @int: first parameter of or function pointer
 * @int: second parameter of function pointer
 * Return: function pointer of type int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
