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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		print_alphabet(alpha);
	}

	print_alphabet('\n');
	return (0);
}
