#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int i = 0;

	char sub[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;

	while (s[i] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[i] == sub[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i] = s[i] - 32;

				break;
			}
		}
		i++;
	}
	return (s);
}
