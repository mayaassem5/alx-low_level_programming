#include <stdio.h>

/**
 *main - entry point prints the alphabet reversed
 *
 *void: nothing there
 *
 *Return: 0 always
 *
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
