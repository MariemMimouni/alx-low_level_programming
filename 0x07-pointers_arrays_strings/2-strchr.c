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
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
		i++;
	}
		return ('\0');
}
