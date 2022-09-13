#include "main.h"
/**
 * print_alphabet - block
 * Description:write print_alphabet function
 * Return: 0;
 */
void print_alphabet(void)
{
	int i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
