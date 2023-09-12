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
		return (1);
	}else
	{
		return (0);
	}

	_putchar('\n');
}
