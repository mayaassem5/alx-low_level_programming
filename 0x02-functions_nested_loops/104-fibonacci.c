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

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);

	for (d = 0; d < 98; d++)
	{
		c = a + b;
		printf(", %ld", c);

		a = b;
		b = c;
	}
	printf("\n");
}

