#include "main.h"
/**
 * print_rev - block
 * Description: print in reverse
 * @s: parameter as pointer
 * Return: None
 */
void print_rev(char *s)
{
	int l = 0;

	int i;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
