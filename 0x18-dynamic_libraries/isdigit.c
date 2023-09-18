#include "main.h"
/**
 * _isdigit - block
 * @c:  parameter
 * Description: check if c is a digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int r;

	if (c <= 57 && c >= 48)
		r = 1;
	else
		r = 0;
	return (r);
}
