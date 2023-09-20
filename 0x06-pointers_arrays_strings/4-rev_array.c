#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i;

	while (a[i] != '\0')
	{
		i++;
	}

	while (i > n)
	{
		_putchar(a[i] + '0');

		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
	}
}
