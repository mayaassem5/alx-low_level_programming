#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *jack_bauer - prints an output
 *
 *void: has no value
 *
 *Return: 0 always
*/
void jack_bauer(void)
{
	int one, two, three, four;

	for (one = 0; one <= 2; one++)
	{
		for (two = 0; two <= 3; two++)
		{
			for (three = 0; three <= 5; three++)
			{
				for (four = 0; four <= 9; four++)
				{
					_putchar(one + '0');
					_putchar(two + '0');
					_putchar(three + '0');
					_putchar(four + '0');
				}
			}
		}
	}

	_putchar('\n');
}
