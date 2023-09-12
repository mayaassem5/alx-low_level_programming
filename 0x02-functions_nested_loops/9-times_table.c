#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *times_table - prints an output
 *
 *void: has output
 *
 *Return: 0 always
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar('0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				if (c < 10)
				{
					_putchar(' ');
				}
			}
			if (c < 10)
			{
				_putchar(c + '0');
			} else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

