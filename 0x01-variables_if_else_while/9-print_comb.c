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

	do {
		putchar(x + '0');
		if (x == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	} while (x < 10);

	putchar('\n');
	return (0);
}
