#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *swap_int - prints an output
 *
 *@int *a: has value
 *@int *b; has value
 *
 *Return: no always
*/
void swap_int(int *a, int *b)
{
	*a=b;
	*b=a;
}
