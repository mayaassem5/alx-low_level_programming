#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *)
{
	int i = 0;

	while (*[i] != '\0')
	{
		if (*[i] <= 'z' && *[i] >= 'a')
		{
			*[i] -= 32;
		}

		i++;
	}
}

