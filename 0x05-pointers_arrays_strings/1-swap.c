#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *swap_int - prints an output
 *
 *@a: has value
 *@b: has value
 *
 *Return: no always
*/
void swap_int(int *a, int *b)
{
	a = b;
	b = a;
}
