#include "main.h"
/**
 * print_alphabet_x10 - block
 * Description: print aphabet x10
 */
void print_alphabet_x10(void)
{
	int i = 1;

	int a;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
