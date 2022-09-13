#include "main.h"
/**
 * times_table - block
 * Ddescription: 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) % 10 == 0)
				_putchar(' ');
			else
			{
				_putchar('0');
				_putchar('0');
			}
			_putchar('0' + i * j);
		}
		_putchar(',');
	}
}
