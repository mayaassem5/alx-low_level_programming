#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ptr;

	unsigned int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));

	for (i = 0; i < str; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
