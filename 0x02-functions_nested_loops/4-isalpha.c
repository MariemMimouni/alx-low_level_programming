#include "main.h"
/**
 * _isalpha - block
 * @c: parameter
 * Description: check if c is alpha
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c <= 122 && c >= 97) || (c <= 90 && c >= 65));
}
