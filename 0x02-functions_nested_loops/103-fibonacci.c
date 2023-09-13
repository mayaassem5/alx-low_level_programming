#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *main - prints an output
 *
 *void: has output
 *
 *Return: 0 always
*/
int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;

	for (c = 0; c < 48; c++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			if (c != 20365011074)
			{
				printf("%d, ", c);
			}
			else
			{
				printf("%d", c);
			}
		}

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
