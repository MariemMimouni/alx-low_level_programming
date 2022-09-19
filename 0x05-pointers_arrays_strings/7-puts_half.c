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

	while (str[l])
	{
		l++;
	}
	int half;

	int i;

	if (l % 2 == 0)
		half = l / 2;
	else
		half = (l - 1) / 2;
	for (i = half; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
