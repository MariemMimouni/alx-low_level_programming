#include "main.h"
/**
 * puts_half - block
 * Description: print half of a string
 * @str: parameter as pointer
 * Return: none
 */
void puts_half(char *str)
{
	int l = 0;

	int h;

	int i;

	while (str[l])
	{
		l++;
	}
	if (l % 2 == 0)
		h = l / 2;
	else
		h = (l - 1) / 2;
	for (i = h; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
