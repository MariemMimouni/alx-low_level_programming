#include "main.h"
/**
 * more_numbers - block
 * Description: print numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int j = 0;

	int i;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i <= 9)
				_putchar('0' + i);
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			i++;
		}
		j++;
		_putchar('\n');
	}
}
