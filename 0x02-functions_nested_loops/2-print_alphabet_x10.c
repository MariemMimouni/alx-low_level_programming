#include "main.h"
/**
 * print_alphabet_x10 - block
 * Description: print aphabet x10
 */
void print_alphabet_x10(void)
{
	int i = 1;

	int a = 'a';

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
