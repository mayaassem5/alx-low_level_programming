#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(*(a + i));
		if ( (*(a + i)) != '0')
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

