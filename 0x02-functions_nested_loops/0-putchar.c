#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *main - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	_putchar('a');
	_putchar('\n');
	return (0);
}
