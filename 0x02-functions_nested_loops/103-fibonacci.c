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
	long int a, b, c;
	int d;
	long int sum = 0;

	a = 1;
	b = 2;

	for (d = 0; d < 48; d++)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}

		a = b;
		b = c;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
