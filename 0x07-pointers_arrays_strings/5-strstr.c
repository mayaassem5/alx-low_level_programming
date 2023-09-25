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
	int i, j;
	char *str[];

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle)
		{
			*str += haystack[i];
		}
		return (str);
	}
	return ('\0');
}
