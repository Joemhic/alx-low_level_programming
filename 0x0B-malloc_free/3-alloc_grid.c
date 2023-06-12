#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to 2d array of int
 * @width: width
 * @height: height
 * Return: pointer to 2d array or null if fails
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int j, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		x[j] = malloc(sizeof(int) * width);

		if (x[j] == NULL)
		{
			for (; j >= 0; j--)
				free(x[j]);

			free(x);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (m = 0; m < width; m++)
			x[j][m] = 0;
	}

	return (x);
}
