#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *print_times_table - prints an output
 *
 *@n: has output
 *
 *Return: 0 always
*/

void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; b <= n; a++)
	{
		if (n < 15 || n > 0)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b != 0)
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
		} else
		{
			break;
		}
	}
}
