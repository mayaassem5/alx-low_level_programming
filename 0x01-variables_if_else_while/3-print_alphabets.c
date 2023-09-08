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
	char z = 'a';

	while (x <= 'Z')
	{
		putchar (x);
		x++;
	}

	while (z <= 'z')
	{
		putchar (z);
		z++;
	}

	putchar('\n');

	return (0);
}
