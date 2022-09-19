#include "main.h"
/**
 * swap_int - block
 * Description: swap 2 var values using pointers
 * @a: parameter1
 * @b: parameter2
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
