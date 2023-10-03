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
	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);


	int **arr;
	unsigned int i, j;

	arr = (int **)malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));

		if (arr[i] == NULL)
			return (NULL);

	}

	return (arr);
}
