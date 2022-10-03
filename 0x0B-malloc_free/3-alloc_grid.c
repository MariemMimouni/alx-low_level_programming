#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimentional arrays of integers
 * @width: parameter1
 * @height : parameter2
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, k;

	int **array;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			array[i][k] = 0;
	}
	return (array);
}
