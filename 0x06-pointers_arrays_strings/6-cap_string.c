#include "main.h"
/**
 * cap_string - block
 * Description: Capitilize string
 * @s: parameter1
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int l = 1;

	int i;

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	while (s[l] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[l - 1] == sep[i] && (s[l] >= 97 && s[l] <= 122))
				s[l] -= 32;
		}
		l++;
	}
	return (s);
}
