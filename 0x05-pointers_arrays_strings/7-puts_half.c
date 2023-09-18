#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	unsigned long int i;

	if (strlen(str) % 2 == 0)
	{
		for (i = ((strlen(str) - 1) / 2); i < strlen(str); i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (((strlen(str) - 1) - 1) / 2); i <= strlen(str); i++)
		{
			_putchar(*(str + i));
		}
	}

	_putchar('\n');
}
