#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *print_alphabet - prints an output
 *
 *void: has nothing
 *
 *Return: 0 always
*/

int _islower(int c)
{

	if (islower(c))
	{
		_putchar(1 + '0');
	}else
	{
		_putchar(0 + '0');
	}

	_putchar('\n');
	return (0);
}
