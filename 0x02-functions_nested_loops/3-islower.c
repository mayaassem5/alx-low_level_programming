#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_islower - prints an output
 *
 *@c: has value
 *
 *Return: 0 always
*/

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}

	return (0);

}
