#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *print_triangle - prints an output
 *
 *@size: has no value
 *
 *Return: 0 always
*/
void print_triangle(int size)
{
	int i, j, c;

	for (i = size; i > 0; i--)
	{
		j = 0;
		while (j < i - 1)
		{
			printf(" ");
			j++;
		}

		c = size;
		while (c >= i)
		{
			printf("#");
			c--;
		}

		printf("\n");
	}
	return (0);
}
