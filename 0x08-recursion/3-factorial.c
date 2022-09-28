#include "main.h"
/**
 * factorial - block
 * Description: calculate factorial
 * @n: parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
