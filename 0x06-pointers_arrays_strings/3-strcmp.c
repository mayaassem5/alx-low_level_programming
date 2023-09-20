#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		_putchar(15 + '0');
	}
	else if (s1 < s2)
	{
		_putchar(45);
		_putchar(15 + '0');
	}
	else
	{
		_putchar(0);
	}

}
