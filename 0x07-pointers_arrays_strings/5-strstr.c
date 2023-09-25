#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	while (*haystack != '\0')
	{
		i = 0;
		j = 0;

		while (haystack[i] != '\0' && needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');

}
