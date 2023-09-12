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
		_putchar(1 + '0');
		_putchar('\n');
	} else if (n < 0)
	{
		_putchar(45);
		_putchar(45);
		_putchar(49);
		_putchar('\n');
	} else
	{
		_putchar(0 + '0');
		return (0);
	}

}
