#include "main.h"
/**
 * print_square - block
 * @size: parameter
 * Description: print square
 * Return: none
 */
void print_square(int size)
{
	int i = 0;

	int j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
