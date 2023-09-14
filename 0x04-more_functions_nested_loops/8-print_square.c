#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_square - prints an output
 *
 *@size: has no value
 *
 *Return: 0 always
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size > 0)
				_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
