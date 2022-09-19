#include "main.h"
/**
 * puts2 - block
 * Description: print every other character
 * @str: parameter as pointer
 * Return: none
 */
void puts2(char *str)
{
	int l = 0;

	int i;

	while (str[l])
		l++;
	for (i = 0; i < l; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
