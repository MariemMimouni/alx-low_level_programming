#include "main.h"
/**
 * _print_rev_recursion - block
 * Description: print in reverse
 * @s: parameter1
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
