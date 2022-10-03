#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: parameter1
 * @s2: parameter2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i1, i2, i, ii;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i1 = 0; s1[i1] != '\0'; i1++)
		;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		;
	s = malloc(sizeof(char) * (i1 + i2 + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < i1; i++)
		s[i] = s1[i];
	for (ii = 0; ii < i2; ii++)
		s[ii + i1] = s2[ii];
	return (s);
}
