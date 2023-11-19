#include "function_pointers.h"
/**
 * print_name - functions that prints name
 * @name: name to print
 * @f: function pointer
 * @char: parameter of function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
