#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_most_numbers - prints an output
 *
 *void: has value
 *
 *Return: no always
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if ((num != 2) || (num != 4))
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
