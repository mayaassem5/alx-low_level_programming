#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		{
			*ptr = s[i];
			return (ptr);
		}
	}

	return ('\0');

}
