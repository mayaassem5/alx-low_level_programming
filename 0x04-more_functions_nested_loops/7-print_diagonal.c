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

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
