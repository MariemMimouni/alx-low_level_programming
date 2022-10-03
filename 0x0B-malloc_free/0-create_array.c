#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: parameter1
 * @c: paramter2
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *cr;

	int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
