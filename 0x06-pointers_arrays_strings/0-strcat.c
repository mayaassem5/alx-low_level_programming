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
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
