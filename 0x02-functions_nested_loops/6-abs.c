#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *_abs - prints an output
 *
 *@a: has value
 *
 *Return: 0 always
*/

int _abs(int a)
{
	int b = abs(a);

	_putchar(b);

	return (0);
}
