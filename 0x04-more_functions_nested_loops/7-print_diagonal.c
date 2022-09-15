#include "main.h"
/**
 * print_diagonal - block
 * @n: parameter
 * Description: print diagonal length n
 * Return: none
 */
void print_diagonal(int n)
{
	int i;

	int j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			i = 0;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
