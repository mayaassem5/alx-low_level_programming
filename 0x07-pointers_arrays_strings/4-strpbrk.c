#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = 0;
				break;
			}

		}
		if (c == 1)
			break;
	}

	return (i);
}
