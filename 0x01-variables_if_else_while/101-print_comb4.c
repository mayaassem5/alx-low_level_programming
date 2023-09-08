#include <stdio.h>
/**
 *main - entry point that prints digits
 *
 *void: has nothing
 *
 *Return: 0 always
*/

int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x == y || x == z || y == z)
				{
					continue;
				}
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 && y == 8 && z == 9)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
