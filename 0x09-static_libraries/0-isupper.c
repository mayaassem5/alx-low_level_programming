#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_isupper - prints an output
 *
 *@c: has output
 *
 *Return: 0 always
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
