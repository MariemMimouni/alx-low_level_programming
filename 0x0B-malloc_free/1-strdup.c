#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to a new string dublicate of str
 * @str: parameter
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i, j;

	char *strout;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		strout[j] = str[j];
	return (strout);
}
