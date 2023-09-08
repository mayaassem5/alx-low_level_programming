#include <stdio.h>

/**
 *main - prints the alphabet
 *
 *void: has nothing
 *
 *Return: 0 always
 *
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
