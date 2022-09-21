#include "main.h"
/**
 * string_toupper - block
 * Description:change string to upper
 * @s: parameter string
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] >= 97 && s[l] <= 122)
			s[l] = s[l] - 32;
		l++;
	}
	return (s);
}
