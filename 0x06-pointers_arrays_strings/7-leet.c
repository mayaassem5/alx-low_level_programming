#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int i = 0;
	int up[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		if (s[i] == up[i] || s[i] == low[i])
		{
			s[i] = num[i];
		}
		i++;
	}
	return (s);
}
