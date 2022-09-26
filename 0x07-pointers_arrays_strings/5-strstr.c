#include "main.h"
/**
 * _strstr - block
 * Description: locate a substring
 * @haystack: parameter1
 * @needle: parameter2
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	int j = 1;

	char *p;

	int test;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j])
			{
				if (haystack
			

