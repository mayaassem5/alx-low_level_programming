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
	int num = 0;

	while (num < 10)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		} else
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
