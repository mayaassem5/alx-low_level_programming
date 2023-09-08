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
	char x = 'a';
	char z = 'A';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}

	while (z <= 'Z')
	{
		putchar (z);
		z++;
	}

	putchar('\n');

	return (0);
}
