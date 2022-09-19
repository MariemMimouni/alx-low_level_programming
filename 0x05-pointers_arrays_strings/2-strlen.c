#include "main.h"
/**
 * int_strlen - block
 * Description: compute the length of a string
 * @s:  parameter of type pointer
 * Return: length of string
 */
int int_strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}


