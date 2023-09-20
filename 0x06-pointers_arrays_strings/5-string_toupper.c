#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		return (s[i] <= 'Z' && s[i] >= 'A');
	}
}

