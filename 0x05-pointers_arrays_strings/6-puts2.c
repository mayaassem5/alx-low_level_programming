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
	unsigned long int i;

	for (i = 0; i <= strlen(str) - 1; i += 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
