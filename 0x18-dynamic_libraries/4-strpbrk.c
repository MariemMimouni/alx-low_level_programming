#include "main.h"
/**
 * _strpbrk - block
 * Description: locates the first occurance
 * @s: parameter1
 * @accept: parameter2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}
