#include "function_pointers.h"
/**
 * print_name - print name
 * @name: parameter1
 * @f: paramter2 pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
