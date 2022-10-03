#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: parameter1
 * @ac: parameter2
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
