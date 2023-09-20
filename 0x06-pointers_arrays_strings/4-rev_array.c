#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;

	while (j < n - 1)
	{

		for (i = j + 1; i >= 0; i--)
		{
			*(a + j) = _putchar(a[i] + '0');

			j++;

			if (i != 0)
			{
				_putchar(',');

				_putchar(' ');
			}
		}
	}
}
