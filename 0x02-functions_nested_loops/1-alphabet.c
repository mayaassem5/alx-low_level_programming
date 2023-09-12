#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints an output
 *
 *void: has nothing
 *
 *Return: 0 always
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
