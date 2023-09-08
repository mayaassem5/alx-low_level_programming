#include <stdio.h>
/**
 *main - entry point
 *
 *void: nothing there
 *
 *Return: 0 always
 *
*/

int main(void)
{
	int x;

	char m;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	for (m = 'a'; m < 'g'; m++)
	{
		putchar(m);
	}
	putchar("\n");
	return (0);
}

