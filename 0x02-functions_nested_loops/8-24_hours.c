#include "main.h"
/**
 * jack_bauer - block
 * Description: print every minute
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
