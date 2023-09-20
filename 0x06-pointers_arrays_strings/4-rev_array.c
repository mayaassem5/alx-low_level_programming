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
	int i = 0, j = 0;

	while (a[i])
	{
		j++;
		i++;
	}

	i = j - 1;

	while (i > n)
	{
		_putchar(a[i] + '0');

		if (i != n + 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
	}
}
