#include "main.h"
/**
 * print_last_digit -block
 * @n: parameter
 * Description: print last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;
	_putchar(x + '0');
	return (x);
}
