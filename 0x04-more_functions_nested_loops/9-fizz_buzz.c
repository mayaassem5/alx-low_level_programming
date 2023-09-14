#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *main - prints an output
 *
 *void: has no value
 *
 *Return: 0 always
*/
int main(void)
{
	int i;

	i =  1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		} else
		{
			printf(" %d", i);
		}

	}
	printf("\n");
	return (0);
}
