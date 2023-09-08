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
		while (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	return (0);
}
