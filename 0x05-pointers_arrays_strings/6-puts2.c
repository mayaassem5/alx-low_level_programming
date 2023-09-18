#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	long unsigned int i;

	for (i = 0; i <= strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}
}
