#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ('\0');
	}

	int i;

	for (i = 0; i < size; i++)
	{
		c[i] = i;
	}
	return (0);
}
