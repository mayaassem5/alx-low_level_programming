#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char new[];

	for(i = 0; i <= strlen(dest) - 1; i++)
	{
		if( dest[i] == '\0')
		{
			break;
		}
		else
		{
			new[i] = dest[i];
		}
	}

	for(j = 0; j <= strlen(src); j++)
	{
		new[strlen(dest) + j] = src[j];
	}
	*dest = new;
}
