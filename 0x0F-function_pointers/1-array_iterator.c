#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
