#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_diagonal - prints an output
 *
 *@n: has value
 *
 *Return: 0 always
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
