#include <stdio.h>
/**
 *main - entry point prints output
 *
 *void: has nothing
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
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
