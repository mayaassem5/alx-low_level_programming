#include <stdio.h>
#include "main.h"

/**
 *_isalpha - prints an output
 *
 *@c: has output
 *
 *Return: 0 always
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
