#include "main.h"
/**
 * _strlen - block
 * Description: compute the length of a string
 * @s:  parameter of type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}


