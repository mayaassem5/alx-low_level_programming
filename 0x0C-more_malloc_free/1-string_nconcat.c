#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * (s1 + (n * s2) + 1));

	if (str == NULL)
		return (NULL);

	while (i <= n)
	{
		if (*s1 == NULL)
			*s1 = "";

		if (*s2 == NULL)
			*s2 = "";

		if (n >= strlen(s2))
		{
			str = *s1 + *s2;
			break;
		}

		str = *s1 + s2[i];
		i++;
	}

	str[i] = '\0';

	return (str);
}
