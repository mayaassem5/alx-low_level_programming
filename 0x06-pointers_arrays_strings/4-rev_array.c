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

	while (i > n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar((*(a + i)) + '0');
		i--;
	}
}
