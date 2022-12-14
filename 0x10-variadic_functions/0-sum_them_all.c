#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of parameters
 * @...: variable number of arguments
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
