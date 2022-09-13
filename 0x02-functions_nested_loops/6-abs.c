#include "main.h"
/**
 * _abs - block
 * Desciption: computes the absolute value
 * @n: parameter
 * Return: absolute value
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n;
	else
		abs = -n;
	return (abs);
}
