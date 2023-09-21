#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if ((s[i] == 'A') || (s[i] == 'a'))
		{
			s[i] = '4';
		}
		else if ((s[i] == 'E') || (s[i] == 'e'))
		{
			s[i] = '3';
		}
		else if ((s[i] == 'O') || (s[i] == 'o'))
		{
			s[i] = '0';
		}
		else if ((s[i] == 'T') || (s[i] == 't'))
		{
			s[i] = '7';
		}
		else if ((s[i] == 'L') || (s[i] == 'l'))
		{
			s[i] = '1';
		}
		
		i++;
		
	}
	return (s);
}
