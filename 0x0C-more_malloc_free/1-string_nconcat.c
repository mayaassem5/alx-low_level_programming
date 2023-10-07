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
	char *ptr;
	unsigned int ;

	unsigned int len1 = 0, len = 0, length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
	{
		len++;
	}

	while (s2[len1] != '\0' || len1 <= n)
	{
		len1++;
	}

		if (n > len1)
		n = len1;

	length = len + n;

	ptr = malloc(length + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		if (i < len)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len];

	ptr[i] = '\0';

	return (s3);
}
