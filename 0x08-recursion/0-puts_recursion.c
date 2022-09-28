#include "main.h"
/**
 * _puts_recursion - block
 * Description: print string followed by new line
 * @s: parameter1
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion((s + 1));
	}
}
