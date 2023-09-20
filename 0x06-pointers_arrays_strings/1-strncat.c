#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i =strlen(src) - 1;
	int j;

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
		j++;
		i++;
	}
	return (dest);
}
