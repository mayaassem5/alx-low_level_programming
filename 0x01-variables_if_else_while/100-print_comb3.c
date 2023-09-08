#include <stdio.h>

/**
 *main - entry point prints digits
 *
 *void: nothing there
 *
 *Return: 0 always
 *
*/

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != 0 || y != 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar(x + '0');
			putchar(y + '0');
		}
	}

	putchar('\n');
	return (0);
}
