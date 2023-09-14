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
	long int n = 612852475143;
	long int dividor = 2;
	long int largest;

	while (n != 1)
	{
		while (n % dividor == 0)
		{
			n = n / dividor;
			largest = dividor;
		}
		dividor++;
	}
	printf("%ld\n", largest);
	return (0);
}
