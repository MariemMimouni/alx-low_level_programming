#include "main.h"
/**
 * _atoi - block
 * Description: get integer out of the string
 * @s: parameter1
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int rest = 0, 
	int firstNum;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rest *= 10;
		rest += (s[i] - 48);
	}

	return (sign * rest);
}
