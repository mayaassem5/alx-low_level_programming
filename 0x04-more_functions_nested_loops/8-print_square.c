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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
