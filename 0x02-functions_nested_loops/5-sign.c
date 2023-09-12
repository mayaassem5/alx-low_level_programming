#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *print_sign - prints an output
 *
 *@n: has value
 *
 *Return: 0 always
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else
	{
		return (0);
	}
	_putchar('\n');
}
