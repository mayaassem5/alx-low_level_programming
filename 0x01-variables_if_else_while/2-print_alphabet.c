#include <stdio.h>

/**
 *main - puts "sizeof"
 *
 *void: has nothing
 *
 *Return: 0 always
 *
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
