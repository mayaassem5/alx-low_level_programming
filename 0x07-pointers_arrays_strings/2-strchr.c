#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] != c)
		{
			return (NULL);
		}
		else
		{
			return (s);
		}
	}
}
