#include "main.h"
/**
 * _strcmp - block
 * Description: compare two strings
 * @s1: parameter1
 * @s2: parameter2
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	int r = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
	}
	return (r);
}
