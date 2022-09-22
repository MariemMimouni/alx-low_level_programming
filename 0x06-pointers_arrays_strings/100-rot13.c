#include "main.h"
/**
 * rot13 - block
 * Description: convert string into rot13
 * @s: parameter
 * Return: pointer
 */
char *rot13(char *s)
{
	int l = 0;

	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (s[l] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[l] == inp[i])
				s[l] = out[i];
		}
		l++;
	}
	return (s);
}
