#include <stdio.h>
#include "main.h"

/**
 *main - prints an output
 *
 *void: has nothing
 *
 *Return: 0 always
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
