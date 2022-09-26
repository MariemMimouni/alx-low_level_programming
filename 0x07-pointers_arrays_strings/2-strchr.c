#include "main.h"
/**
 * _strchr - block
 * Description: locate character in a string
 * @s: parameter1
 * @c: parameter2
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int test = 0;

	int i = 0;

	char *p;

	while (s[i])
	{
		if (s[i] == c)
		{
			p = &s[i];
			test = 1;
			break;
		}
		i++;
	}
	if (test)
		return (p);
	else
		return (NULL);
}
