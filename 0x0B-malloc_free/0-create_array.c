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
	char *ptr;
	int i;

	if (size == 0)
	{
		return ('\0');
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == '\0')
	{
		return ('\0');
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++
	}

	return (ptr);
}
