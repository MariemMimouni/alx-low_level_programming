#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - block
 * Description: print numbers from n to 98
 * @n: parameter
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 98; i <= n; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
