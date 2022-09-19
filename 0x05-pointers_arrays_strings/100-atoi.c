#include "main.h"
/**
 * _atoi - block
 * Description: get integer out of the string
 * @s: parameter1
 * Return: integer
 */
int _atoi(char *s)
{
	int nsign = 0;

	int l = 0;

	while (s[l] != '\0')
		if (s[l] == '-')
			nsign++;
		if (s[l] <= '9' && s[l] >= '0')

		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i]
