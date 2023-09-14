#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_numbers - prints an output
 *
 *void: has value
 *
 *Return: 0 always
*/
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
	return (0);
}
