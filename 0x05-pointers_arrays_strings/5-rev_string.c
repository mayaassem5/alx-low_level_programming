#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int i; 

	for (i = strlen(s) - 1; i >= 0 && s[i] != '\0'; i--)
	{
		_putchar(*(s + i));
	}
}	
