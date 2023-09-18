#include "main.h"
/**
 * _memcpy - block
 * Description: copy n bytes of memory
 * @dest: parameter1 destination
 * @src: parameter2 source
 * @n: parameter3
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
