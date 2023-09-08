#include <stdio.h>

/**
 *main - prints digit numbers
 *
 *void: nothing here
 *
 *Return: 0 always
 *
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');

	return (0);
}
