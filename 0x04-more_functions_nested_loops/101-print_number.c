#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n; // Use the unsigned int to avoid integer overflow issues
	}
	else
	{
		m = n;
	}

	if (m / 10 != 0)
		print_number(m / 10); // Recursively print digits

	_putchar((m % 10) + '0'); // Print the last digit as a character
}

