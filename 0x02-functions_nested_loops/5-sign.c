#include "main.h"
/**
 * print_sign - block
 * @n: parameter
 * Description: print sign
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	int x; 

	if (n == 0)
	{
		_putchar('0');
		x = 0;

	}
	if (n > 0)
	{
		_putchar('+');
		x = 1;

	}
	if (n < 0)
	{
		_putchar('-');
		x = -1;

	}
	return (x);
}
