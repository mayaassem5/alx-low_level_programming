#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr;
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}

	}

	return (arr);
}
