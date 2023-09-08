#include <stdio.h>

/**
 * main - the entry point print the alphabet
 *
 * void: nothing there
 *
 * Return: 0 always
 *
*/

int main(void)
{
	char x = 'A';

	while (x <= 'Z')
	{
		putchar (x);
		x++;
	}

	putchar('\n');

	return (0);
}
