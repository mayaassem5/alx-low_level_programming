#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_last_digit - prints an output
 *
 *@d: has value
 *
 *Return: 0 always
*/

int print_last_digit(int d)
{
	int z;

	z = abs(d % 10);

	_putchar(z + '0');
	return (z);
}
