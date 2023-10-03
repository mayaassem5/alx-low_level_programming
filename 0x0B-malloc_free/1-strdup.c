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

	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(*str) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
