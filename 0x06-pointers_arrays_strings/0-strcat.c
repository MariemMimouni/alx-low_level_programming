#include "main.h"
/**
 * _strcat - block
 * Description: append s1 to s2 using pointers
 * @dest: parameter1 destination's pointer
 * @src: parameter2 source's  pointer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0;

	int l2 = 0;

	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		dest[l1] = src[l2];
		l2++;
		l1++;
	}
	return (dest);
}
