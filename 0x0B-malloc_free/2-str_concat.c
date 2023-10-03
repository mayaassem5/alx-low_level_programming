#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j;

	unsigned int len1 = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
	{
		len++;
	}

	while (s2[len1] != '\0')
	{
		len1++;
	}

	s3 = malloc(sizeof(char) * (len + len1 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}

	return (s3);
}
