#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *print_to_98 - prints an output
 *
 *@n: has output
 *
 *Return: 0 always
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	} else if (n == 98)
	{
		printf("%d", n);
	} else
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
