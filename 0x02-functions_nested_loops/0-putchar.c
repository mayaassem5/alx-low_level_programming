#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *main - writes the character c to stdout
 *
 *void: nothing here
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int loop;

	for (loop = 0; loop <= 8; loop++)
	{
		_putchar(str[loop]);
	}

	_putchar('\n');
	return (0);
}
