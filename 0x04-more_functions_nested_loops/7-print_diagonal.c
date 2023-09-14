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
	char space;
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			space += ' ';
			_putchar(space);
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
