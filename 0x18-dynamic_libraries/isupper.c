#include "main.h"
/**
 * _isupper - block
 * @c: parameter
 * Description: check if c is uppercase
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;
	return (r);
}
