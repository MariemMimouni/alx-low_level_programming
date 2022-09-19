#include "main.h"
/**
 * rev_string - block
 * Description: reverse string
 * @s: parameter as pointer
 * Return: none
 */
void rev_string(char *s)
{
	int l = 0;

	int i;

	char c;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i <= l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
